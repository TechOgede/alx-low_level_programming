#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: destination string
* @src: string to be concatenated onto dest
*
* Description: Overwrites the null character terminating
* dest. Then assigns each char of src contiguously and finally adds
* the terminating null char to dest.
* Return: returns a pointer to the first character of the new dest
*/

char *_strcat(char *dest, char *src);
{
	int i = 0, dest_len = 0, src_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[src_len] != '\0')
		src_len++;


	for (i = 0; i < src_len; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + (i + 1)] = '\0';
	return (dest);
}
