#include "main.h"

/**
* print_diagonal - prints \ multiple times diagonally
* @n: any positive integer
*
* Description: using a for loop to print \ n times
* Return: no return value
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)

	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(32);

			_putchar(92);
			_putchar(10);
		}

	}

	else
		_putchar(10);

}



