#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: an integer, positive or negative or zero
 *
 * Description: compares n magnitude with zero. Uses ASCII to print sign
 * Return: 1 and prints + if n>0, 0 and prints 0 if n=0, -1 and prints - if n<0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}

	if (n < 0)
	{
		putchar(45);
		return (-1);
	}

	if (n == 0)
	{
		putchar(48);
		return (0);
	}
}
