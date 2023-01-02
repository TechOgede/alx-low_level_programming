#include "main.h"

/**
* _memset - fills a specified area of memory with a specified char
* @s: string of chars
* @b: char to fill up specified area of string
* @n: no of bytes to be filled with b
*
* Description: loops through the string and sets the first n bytes to b
* Return: the modified array of chars (a string)
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
