#include "main.h"

/**
* print_most_numbers - display numbers btw 0 and 9 except 2 and 4
*
* Description: uses a for loop to display numbers
* Return: no return value
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
