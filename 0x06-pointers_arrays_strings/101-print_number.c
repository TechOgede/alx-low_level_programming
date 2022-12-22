#include "main.h"

/**
* print_number - prints an integer
* @n: integer to be printed
*
* Description: uses _putchar to print numbers
* Return: no return value
*/

void print_number(int n)
{
	unsigned int k;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	k = n;

	if (k / 10)
		print_number(k / 10);

	_putchar((k % 10) + '0');

}
