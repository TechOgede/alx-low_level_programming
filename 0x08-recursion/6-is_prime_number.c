#include "main.h"
int prime_operation(int n, int c);

/**
* is_prime_number - determines if a input is a prime number or not
* @n: a positive integer
*
* Description: uses recursion in its calculation
* Return: 1 if n is prime number, 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);

	return (prime_operation(n, 2));
}

/**
* prime_operation - helper function
* @n: a positive integer
* @c: iterator
*
* Description: called recursively with an incremented c
* Return: 1 if n is prime number, 0 otherwise
*/

int prime_operation(int n, int c)
{
	if (c <= (n / 2))
	{
		if (n % c == 0)
			return (0);

		return (prime_operation(n, c + 1));
	}
	return (1);
}
