#include "main.h"


/**
* print_addr - prints the virtual address to
* which the system first transfers control. Thereby, starting the process
* @ptr: buffer
*
* Description: prints the entry point address
* Return: no return value
*/

void print_addr(const char *ptr)
{
	unsigned char class = (unsigned char) ptr[4];

	if (class == ELFCLASS32)
		printf(" Entry point address:	0x%x\n", ((Elf32_Ehdr *)ptr)->e_entry);
	if (class == ELFCLASS64)
		printf(" Entry point address:	0x%lx\n", ((Elf64_Ehdr *)ptr)->e_entry);

}



/**
* print_type - print type of ELF 
* @ptr: buffer
*
* Description: file can be either an Executable,
* relocatable, shared object, core file or an unknown
* Return: no return value
*/

void print_type(const char *ptr)
{
	unsigned char type = (unsigned char)ptr[16];

	if (type == ET_NONE)
		printf(" Type:			NONE (No file type)\n");
	else if (type == ET_REL)
		printf(" Type:			REL (Relocatable file)\n");
	else if (type == ET_EXEC)
		printf(" Type:			EXEC (Executable file)\n");
	else if (type == ET_DYN)
		printf(" Type:			DYN (Shared object file)\n");
	else
		printf(" Type:			CORE (Core file)\n");
}


/**
* print_ABI_version - print the ABI version
* @elf: buffer
* 
* Description: ABI ver depends on the OSABI
* Return: no return value
*/

void print_ABI_version(const char *ptr)
{
	char ABI = ptr[8];

	printf(" ABI Version:		%d\n", ABI);
}


/**
* print_OSABI - print the OS App Binary Interface
* @ptr: buffer
*
* Description: checks the contents of the eighth byte
* Return: no return value
*/

void print_OSABI(const char *ptr)
{
	char OSABI = ptr[7];

	if (OSABI == ELFOSABI_SYSV || OSABI == ELFOSABI_NONE)
		printf(" OS/ABI:		UNIX - System V\n");
	else if (OSABI == ELFOSABI_SOLARIS)
		printf(" OS/ABI:		UNIX - Solaris\n");
	else if (OSABI == ELFOSABI_NETBSD)
		printf(" OS/ABI:		UNIX - NetBSD\n");
	else
		printf(" OS/ABI:		<unknown: %x>\n", OSABI);
}

/**
* print_version - prints the version num of the ELF specs
* @ptr: pointer to the buffer
*
* Description: checks for the EV_CURRENT
* Return: no return value
*/

void print_version(const char *ptr)
{
	int version = ptr[6];

	printf(" Version:		%d", version);
	if (version == EV_CURRENT)
		printf(" (current)\n");
}


/**
* print_data - prints the endianness of the file
* @ptr: buffer containing file contents
*
* Description: checks the value at the 6th byte
* Return: no return value
*/

void print_data(const char *ptr)
{
	char data = ptr[5];

	if (data == ELFDATA2LSB)
		printf(" Data:			2's Complement, little endian\n");
	if (data == ELFDATA2MSB)
		printf(" Data:			2's Complement, big endian\n");
}


/**
* print_magic - prints the 'magic' 16 bytes
* @elf: pointer to the buffer
*
* Description: prints each of the first 16 bytes of the file
* Return: no return value
*/

void print_magic(const char *ptr)
{
	int i;

	printf(" Magic:			");
	for (i = 0; i < 16; i++)
		printf("%02x ", ptr[i]);
	printf("\n");
}

/**
* check_class - checks that ELFCLASS is 32 bits or 64 bits
* @ptr: buffer containing file contents
*
* Description: checks and prints appropiate message
* Return: no return value
*/

void check_class(const char *ptr)
{
	unsigned char class;
	
	class = (unsigned char) ptr[4];
	
	if (class == ELFCLASSNONE)
		exit(98);
	printf("ELF Header:\n");

	print_magic(ptr);

	if (class == ELFCLASS32)
		printf(" Class:			ELF32\n");
	if (class == ELFCLASS64)
		printf(" Class:			ELF64\n");

}

/**
* check_elf - checks file contents for the letters E L F
* @ptr: a buffer containing the file contents
*
* Description: checks the first four bytes of the buffer
* Return: 1 if successful, 0 if not
*/

int check_elf(const char *ptr)
{
	int zero_byte, second_byte, third_byte, fourth_byte;

	zero_byte = (int)ptr[0];
	second_byte = ptr[1];
	third_byte = ptr[2];
	fourth_byte = ptr[3];

	if (zero_byte == 127 && second_byte == 'E' && third_byte == 'L'
			&& fourth_byte == 'F')
		return (1);
	return (0);
}


/**
* safe_close - closes file and prints message on error
* @fd: file descriptor
*
* Description: calls close and uses dprintf to print err message
* Return: no return value
*/

void safe_close(int fd)
{
	int err;

	err = close(fd);
	if (err < 0)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
		exit(98);
	}
}

/**
* main - Entry point to program that displays ELF header
* @argc: num of args to main
* @argv: array of args to main
*
* Return: 0 if successful, otherwise anything else
*/

int main(int argc, char **argv)
{
	int fd, stats;
	struct stat statsbuf;
	const char *elf;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header file\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Can't read from %s\n", argv[1]);
		exit(98);
	}
	stats = fstat(fd, &statsbuf);
	if (stats < 0)
	{
		dprintf(STDERR_FILENO, "Failed to read %s stats\n", argv[1]);
		safe_close(fd);
		exit(98);
	}
	elf = mmap(NULL, statsbuf.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
	if (elf == MAP_FAILED)
	{
		dprintf(STDERR_FILENO, "Can't read from %s\n", argv[1]);
		safe_close(fd);
		exit(98);
		
	}

	if(!check_elf(elf))
	{
		dprintf(STDERR_FILENO, "%s is not an elf file\n", argv[1]);
		safe_close(fd);
		exit(98);
	}

	check_class(elf);
	print_data(elf);
	print_version(elf);
	print_OSABI(elf);
	print_ABI_version(elf);
	print_type(elf);
	print_addr(elf);

	return (0);

	

}
