#include "main.h"

/**
* print_square - prints # multiple times diagonally
* @size: any positive integer > 0. denotes the size of the square
*
* Description: using a for loop to print # n times
* Return: no return value
*/

void print_square(int size)
{
	int i, j;

	if (size > 0)

	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar(35);

			_putchar(10);
		}

	}

	else
		_putchar(10);

}



