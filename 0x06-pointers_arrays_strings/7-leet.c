#include "main.h"

/**
* leet - encodes a string into leet
* @s: string to be encoded
*
* Description: uses the encoding key to develop string
* Return: returns the encoded string
*/

char *leet(char *s)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if(a[j] == s[i])
				s[i] = b[j];
		}
	}
	return (s);
}
