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

	if (nmemb == 0 || size == 0)
		return (NULL);

	block = malloc(size * nmemb);

	if (block == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		*(block + i) = 0;

	return (block);

}
