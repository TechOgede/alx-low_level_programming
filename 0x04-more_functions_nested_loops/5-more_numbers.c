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

	for (i = 0; i < 10; i++)
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
		_putchar(i + '0'
	}
	_putchar('\n');
}
