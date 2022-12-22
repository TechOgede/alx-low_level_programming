#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: destination string
* @src: string to be concatenated onto dest
* @n: a positive integer denoting the max number of bytes (or chars)
* of src to be concatenated to dest.
* Description: Similar to strcat except that src doesnt have to be null
* terminated if it contains n  or more bytes.
* Return: returns a pointer to the first character of the new dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0, src_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[src_len] != '\0')
		src_len++;

	if (n > src_len) 
		n = src_len;

	for (i = 0; i < n; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
