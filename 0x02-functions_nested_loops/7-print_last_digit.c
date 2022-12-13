#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: any integer
 *
 * Description: computes the remainder after dividing n by 10
 * Return: a positive integer
 */

int print_last_digit(long int n)
{
	int l_digit;

	n = _abs(n);
	l_digit = n % 10;
	_putchar('0' + l_digit);

	return (l_digit);
}

/**
 * _abs - computes the absolute value of a number
 * @n: a signed integer
 *
 * Description: compares n to zero and and always returns positve n
 * Return: a positive n
 */

int _abs(long int n)
{
	if (n >= 0)
		return (n);

	else
		return (n * -1);
}
