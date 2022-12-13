#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	int i, x, y, next;

	x = 0;
	y = 1;
	next = x + y;
	printf("%d, %d, ", x, y);

	for (i = 3; i <= 100; i++)
	{
		printf("%d, ", next);
		x = y;
		y = next;
		next = x + y;
	}
	printf("\n");
	return (0);
}
