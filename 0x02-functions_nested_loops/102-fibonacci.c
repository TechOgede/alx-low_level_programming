#include <stdio.h>

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

	for (i = 1; i <= 50; i++)
	{
		printf("%ld, ", next);
		x = y;
		y = next;
		next = x + y;
	}
	printf("\n");
	return (0);
}
