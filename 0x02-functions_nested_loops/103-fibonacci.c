#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	long int x, y, next, flag, sum_even;

	x = 0;
	y = 1;
	next = x + y;
	flag = 1;
	sum_even = 0;

	while (flag)
	{
		if (next <= 4000000)
		{
			x = y;
			y = next;
			next = x + y;

			if (next % 2 == 0)
			{
				sum_even += next;
			}
		}
		else
			flag = 0;
	}
	printf("%ld", sum_even);
	printf("\n");
	return (0);
}
