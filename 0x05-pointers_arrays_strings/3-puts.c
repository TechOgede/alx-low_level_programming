#include "main.h"

/**
* _puts - prints a string to stdout
* @s: a null termianted string
*
* Description: uses _putchar to display characters.
* stops when the Null character is detected.
* Return: no return value
*/

void _puts(char *s)
{

	while (++*s)
		_putchar(*s);
}
