#include "main.h"

/**
* string_toupper - converts a lowercase string to uppercase
* @s: a lowercase string
*
* Description: subtracts 32 from each char of the string
* Return: returns the uppercase string
*/

char *string_toupper(char *s)
{
	while (*s++)
	{
		if (*s >= 97 && *s <= 122)
			*s -= 32;
	}
	return (s);
}

