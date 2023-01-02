#include "main.h"

/**
* _strchr - locates the first occurence of a char
* in a string
* @s: string of chars
* @c: char to located in s
*
* Description: loops through the string and returns
* the first occurence of c
* Return: a pointer to first occurence of c or NULL
* if c isnt found
*/

char *_strchr(char *s, char c)
{
	unsigned int i;
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
