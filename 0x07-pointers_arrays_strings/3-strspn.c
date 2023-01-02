#include "main.h"

/**
* _strspn - returns the length of the substring in s which consists
* entirely of the string in 'accept'
* @s: string of chars
* @accept: second string used to check for substring
*
* Description: loops through both string and keeps count of matches made
* Return: an int thats the number of matches made
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len_s = 0, len_accept = 0;
	unsigned int len_sub = 0;
	unsigned int found_match;

	while (s[len_s] != '\0')
		len_s++;

	while (accept[len_accept] != '\0')
		len_accept++;

	for (i = 0; i < len_s; i++)
	{
		found_match = 0;
		for (j = 0; j < len_accept; j++)
		{
			if (s[i] == accept[j])
			{
				found_match = 1;
				break;
			}


		}
		if (!found_match)
			break;
		else
			len_sub++;

	}
	return (len_sub);
}
