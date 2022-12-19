#include "main.h"
#include<string.h>

/**
* print_rev - prints a string in reverse
* @s: a null termianted string
*
* Description: uses _putchar to display characters.
* stops when the Null character is detected.
* Return: no return value
*/

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
