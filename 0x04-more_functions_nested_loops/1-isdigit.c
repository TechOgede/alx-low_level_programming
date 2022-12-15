#include "main.h"

/**
* _isdigit - determines if a character is a digit from 0 to 9
* @c: a number in single quotes
*
* Description: uses the ASCII chart as a standard
* Return: 1 if a digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
}


