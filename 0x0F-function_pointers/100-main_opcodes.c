#include "function_pointers.h"
#include<stdio.h>
#include<stdlib.h>

/**
* main - Entry point
* @argc: no of arguments
* @argv: array pf arguments
*
* Return: 0 if successful
*/

int main(int argc, char **argv)
{
	int i = 0, num_bytes;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (unsigned char *)main;

	
	if (num_bytes > 0)
	{
		while (i < (num_bytes - 1))
			printf("%02hhx ", ptr[i++]);
	printf("%hhx\n", ptr[i]);
	}

	return (0);
}
