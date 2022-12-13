#include "main.h"

/**
 * print_to_98 - print natural numbers from n to 98
 * @n: an integer
 *
 * Description: using a loop to count upwards
 * Return: no return value
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{	printf("%d, ", i);
	}
	printf("\n");
}
