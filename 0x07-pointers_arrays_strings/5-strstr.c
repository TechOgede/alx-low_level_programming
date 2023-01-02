#include "main.h"

/**
* _strstr - takes two strings
* @haystack: string to be scanned
* @needle: string to be used to scan haystack
*
* Description: loops through both string and returns the first occurence of
* the substring, needle, in haystack.
* Return: a pointer to that first occurence
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, len_haystack = 0, len_needle = 0;

	while (haystack[len_haystack] != '\0')
		len_haystack++;

	while (needle[len_needle] != '\0')
		len_needle++;

	for (i = 0; i < len_haystack; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; j < len_needle; j++)
			{
				if (haystack[i + j] == needle[j])
					return ((haystack + i));
			}
		}

	}
	return (NULL);
}
