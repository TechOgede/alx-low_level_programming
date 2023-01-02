#include "main.h"

/**
* _strpbrk - takes two strings
* @s: string to ne scanned
* @accept: second string whose char are checked against those in s
*
* Description: loops through both string and returns the first occurence of
* any char in accept in s
* Return: a pointer to that first occurence
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, len_s = 0, len_accept = 0;

	while (s[len_s] != '\0')
		len_s++;

	while (accept[len_accept] != '\0')
		len_accept++;

	for (i = 0; i < len_s; i++)
	{
		for (j = 0; j < len_accept; j++)
		{
			if (s[i] == accept[j])
			{
				return ((s + i));
			}


		}

	}
	return (NULL);
}
