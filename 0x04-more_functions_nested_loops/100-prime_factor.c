#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/

int main(void)
{
	unsigned long int i = 3, num = 612852475143;

	for (; i < 12057; i += 2)
	{
		while (num % i == 0 && num != i)
		{
			num /= i;


		}

	}
	printf("%ld \n", num);
	return (0);
}
