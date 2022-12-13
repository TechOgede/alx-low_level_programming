#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	int sum;

	for (i = 1; i < 1024; i++)
	{
		sum = 0;
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;

	}
	printf("\n");
	return (0);
}
			
