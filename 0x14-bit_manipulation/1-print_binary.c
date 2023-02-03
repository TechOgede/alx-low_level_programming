#include "main.h"

unsigned int power(unsigned int x, unsigned int y);

/**
* print_binary - prints the binary represenation of a positive number
* @n: the positive number
*
* Description: uses descending powers of two and subtraction
* Return: no return value
*/

void print_binary(unsigned long int n)
{
	unsigned long int i = 0, max_power, num = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (1)
	{
		i++;
		max_power = power(2, i);
		if (max_power > n)
		{
			i--;
			break;
		}
		if (max_power == n)
			break;
	}

	while (num)
	{
		max_power = power(2, i);
		i--;

		if (max_power <= num)
		{
			_putchar('1');
			num -= max_power;
		}
		else
			_putchar('0');
	}
	i++;

	while (i)
	{
		_putchar('0');
		i--;
	}

}


/**
* power - calculates the power of a number
* @x: base number
* @y: power x is to be raised to
*
* Description: uses a loop
* Return: an int
*/

unsigned int power(unsigned int x, unsigned int y)
{
	unsigned int i, val = 1;

	for (i = 0; i < y; i++)
	{
		val *= x;
	}
	return (val);
}
