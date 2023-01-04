#include "main.h"

/**
* _puts_recursion - similar to puts() but works recursively
* @s: string to display
*
* Description: recursively called to print each char in the string
* Return: no return value
*/

void _puts_recursion(char *s)
{

	if (*s)
	{	_putchar(*s);
		_puts_recursion((s + 1));

	}

	else
		_putchar('\n');
}
