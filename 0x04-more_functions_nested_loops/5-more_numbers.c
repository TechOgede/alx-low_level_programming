#include "main.h"

/**
* more_numbers - display numbers btw 0 and 9 except 2 and 4
*
* Description: uses a for loop to display numbers
* Return: no return value
*/

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');

			_putchar((i % 10) + '0');
		}

		_putchar('\n');
	}
}
