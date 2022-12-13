i#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	long int i, x, y, next;

	x = 0;
	y = 1;
	next = x + y;

	for (i = 1; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%ld, ", next);
			x = y;
			y = next;
			next = x + y;
		}
		else
			printf("%ld", next);
	}
	printf("\n");
	return (0);
}
