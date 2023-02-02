#include "main.h"
#include<string.h>
unsigned int power(unsigned int x, unsigned int y);

/**
* binary_to_uint - converts binary to an unsigned int
* @b: string of zeroes and ones
*
* Description: loops through the string and increments a variable
* by a value gotten by raising 2 to a calculated power
* Return: an unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num = 0, nChar = 0;

	if (!b)
		return (0);

	nChar = strlen(b);

	for (i = 0; b[i]; i++)
	{
		nChar--;

		if (b[i] == '1')
			num += power(2, nChar);
		else if (b[i] == '0')
			;
		else
			return (0);
	}
	return (num);
}

/**
* power - calculates the power of a number
* @x: base number
* @y: power x is to be raised to
*
* Description: uses a loop
* Return: an int
*/

unsigned int power(unsigned int x, unsigned int y)
{
	unsigned int i, val = 1;

	for (i = 0; i < y; i++)
	{
		val *= x;
	}
	return (val);
}
