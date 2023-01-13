#include "main.h"

/**
* _calloc - allocates block of memory
* @nmemb: no of elements to be stored in the block
* @size: no of bytes of each element
*
* Description: dynamically allocates memory and sets it to zero
* Return: a  pointer to the newly created block
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;

	block = malloc(size * nmemb);

	if (block == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		*(block + 1) = 0;

	return (block);

}
