#include "main.h"
#include<stdio.h>
/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: num of bytes of s2 to be concatenated to s1
*
* Description: allocates memory for the new string
* which consists of s1 and n bytes of s2 null-terminated
* Return: pointer to newly formed string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, len_new_str, len_s1 = 0, len_s2 = 0;

	if (s1 == NULL)
		s1 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len_s1++;

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s2[i] != '\0'; i++)
		len_s2++;

	if (n > len_s2)
		n = len_s2;

	len_new_str = len_s1 + n;

	new_str = malloc(len_new_str + 1);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len_new_str; i++)
	{
		if (i < len_s1)
			new_str[i] = s1[i];
		else
			new_str[i] = s2[(i - len_s1)];
	}

	new_str[i] = '\0';

	return (new_str);
}
