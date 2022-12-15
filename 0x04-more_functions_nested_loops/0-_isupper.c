#include "main.h"

/**
* _isupper - determines if a character is uppercase or not
* @c: an ASCII character
*
* Return: 1 if uppercase, 0 otherwise
*/

int _isupper(int c)
{
	int c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
		return (0);
}
