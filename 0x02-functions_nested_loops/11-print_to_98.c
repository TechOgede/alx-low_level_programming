#include "main.h"

/**
 * print_to_98 - print natural numbers from n to 98
 * @n: an integer
 *
 * Description: using a loop to count
 * Return: no return value
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}

	}

	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	{

	printf("\n");


}
