#include "main.h"
#include<stdio.h>

/**
* _strdup - creates a copy of a string
* @str: string to be copied
*
* Description: dynamically allocates memory for the string
* Return: a pointer to the array if successful, else NULL
*/

char *_strdup(char *str)
{
	char *s;
	int i, len = 0;

	while (*str++)
		len++;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[len] = '\0';

	return (s);

}
