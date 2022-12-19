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
	int i = 0, flag = 1;

	while (flag)
	{	
		if (s[i] != 0)
			_putchar(s[i]);
			i++;
		else
			flag = 0;
	}
}
