#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (0) if successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* get the last digit */
	int l_d = n % 10;

	if (l_d > 5)
	printf("The last digit of %d is %d and is greater than 5\n", n, l_d);

	if (l_d == 0)
	printf("The last digit of %d is %d and is 0\n", n, l_d);

	if (l_d != 0 && l_d < 6)
	printf("The last digit of %d is %d and is less than 6 and not 0\n", n, l_d);

	return (0);
}