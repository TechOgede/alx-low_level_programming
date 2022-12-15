#include "main.h"

/**
* print_line - prints _ multiple times on the same line
* @n: any positive integer
*
* Description: using a for loop to print _ n times
* Return: no return value
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}



