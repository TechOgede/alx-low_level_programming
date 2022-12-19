#include "main.h"

/**
* _puts - prints a string to stdout
* @s: a null termianted string
*
* Description: uses _putchar to display characters.
* stops when the Null character is detected.
* Return: 0 if successful
*/

int _puts(char *s)
{

	while (*(s++))
		_putchar(*s);
	return (0);
}
