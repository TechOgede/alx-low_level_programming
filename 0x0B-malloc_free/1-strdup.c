#include "main.h"

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
	int i, len;

	for (len = 0; str[len] != '\0'; len++)
		;

	if (str == NULL)
		return (NULL);

	s = (char *)malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		s[i] = str[i];
	}

	return (s);

}
