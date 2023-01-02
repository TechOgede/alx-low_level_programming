#include "main.h"

/**
* _memcpy - copies n bytes of a memory area to a destination
* @dest: destination buffer
* @src: source string to be copied
* @n: no of bytes to be copied
*
* Description: loops through the string and
* copies the first n bytes or src to dest
* Return: the modified dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
