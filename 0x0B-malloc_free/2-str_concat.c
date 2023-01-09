#include "main.h"
#include<string.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
*
* Description: allocates space for the new string
* Return: pointer to the new string
*/

char *str_concat(char *s1, char *s2)
{
	int i, len_s1, len_s2;
	char *str;
	char *empty = "";

	if (s1 == NULL)
		s1 = empty;

	if (s2 == NULL)
		s2 = empty;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < len_s2; i++)
	{
		str[len_s1 + i] = s2[i];
	}
	str[len_s1 + len_s2] = '\0';

	return (str);
}
