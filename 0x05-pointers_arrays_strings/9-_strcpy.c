#include "main.h"
#include<string.h>

/**
* _strcpy - copies a string to a destination buffer
*@dest: destination buffer
*@src: string to be copied
*
* Description: loops through src and copies each element to dest
* Return: returns a string (char *)
*/

char * _strcpy(char *dest, char *src)
{
	for (i = 0; i < strlen(src) && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';
	return dest;
}
