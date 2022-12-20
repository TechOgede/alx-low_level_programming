#include "main.h"
#include<string.h>

/**
* puts_half - prinnts the second half of a string
* @s: a null termianted string
*
* Description: uses _putchar to display characters.
* prints the last n characters if string length is an odd number
* where n is (length - 1) / 2
* Return: no return value
*/

void puts_half(char *s)
{
	int len = strlen(s), i;

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(s[i]);
		}
	}
	else
	{
		int n = ((len - 1) / 2);

		for (i = n + 1; i < len; i++)
		{
			_putchar(s[i]);
		}
	}

	_putchar('\n');
}
