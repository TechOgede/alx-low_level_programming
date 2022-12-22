#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first sring
* @s2: second string
*
* Description: compares each character of both strings using
* thier ASCII values
* Return: 0 if both strings are equal
* 1 if s1 > s2
* -1 if s1 < s2
*/


int _strcmp(char *s1, char *s2)
{
	int res;

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	res = *s1 - *s2;
	return (res);
}

