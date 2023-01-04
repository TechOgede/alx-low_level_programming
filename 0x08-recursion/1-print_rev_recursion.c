#include "main.h"

/**
* _print_rev_recursion - similar to puts() but works recursively
* and prints in reverse
* @s: string to display
*
* Description: recursively called to print in reverse each char in the string
* Return: no return value
*/

void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion((s + 1));
		_putchar(*s);

	}

	else
		_putchar('\n');
}
