#include "main.h"

/**
* print_triangle - prints # multiple timesto form a triangle
* @size: any positive integer > 0. denotes the size of the triangle
*
* Description: using a for loop to print # n times
* Return: no return value
*/

void print_triangle(int size)
{
	int i, j, n = size - 1;

	if (size > 0)

	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');

			}

			n--;
			_putchar('\n');
		}

	}

	else
		_putchar('\n');

}



