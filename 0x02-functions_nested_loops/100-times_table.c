#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: a positive integer between 0 and 15
 *
 * Description: using nested loops
 * Return: no return value
 */

void print_times_table(int n)
{
	int i, j, op;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				op = i * j;
				_putchar(44);
				_putchar(32);

				if (op <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(op + 48);
				{

				else if (op <= 99)
				{
					_putchar(32);
					-putchar((op / 10) + 48);
					_putchar((op % 10) + 48);
				}

				else
				{
					_putchar(((op / 100) % 10) + 48);
					_putchar(((op  / 10) % 10) + 48);
					_putchar((op / 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
