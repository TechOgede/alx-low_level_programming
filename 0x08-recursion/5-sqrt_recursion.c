#include "main.h"
int sqrt_by_prime(int n, int c);

/**
* _sqrt_recursion - calculates the square root of n using recursion
* @n: a natural number
*
* Description: recursively calls a helper function
* Return: a natural number
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (sqrt_by_prime(n, 2));
}

/**
* sqrt_by_prime - determines the square root by
* considering prime factors
* @n: a positive integer
* @c: iterator and possible prime factors of n
*
* Return: a positve integer
*/

int sqrt_by_prime(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + sqrt_by_prime(n, c + 1));
}
