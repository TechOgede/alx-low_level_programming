#include "main.h"
#include<string.h>

/**
* puts2 - prints alternae chars in a string to stdout
* @s: a null termianted string
*
* Description: uses _putchar to display characters.
* stops when the Null character is detected.
* Return: no return value
*/

void puts2(char *s)
{
	int i = 0, len = strlen(s);

	for (; i < len; i += 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
