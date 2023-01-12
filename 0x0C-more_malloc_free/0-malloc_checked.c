#include "main.h"

/**
* malloc_checked - allocates a block of memory and
* terminates normal process if malloc fails
* @b: size in bytes of memory block to be returned
*
* Description: calls malloc and if that fails, calls exit
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
