#include "main.h"

/**
* _strncpy - copies n bytes of a string to a destination buffer
*@dest: destination buffer
*@src: string to be copied
*@n: number of bytes of src to be copied
*
* Description: loops through src and copies each element to dest
* Return: returns a string (char *)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, src_len = 0;

	while (src[src_len])
		src_len++;
	if (n > src_len)
		n = src_len;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i <= n; i++)
		dest[i] = '\0';
	return (dest);
}
