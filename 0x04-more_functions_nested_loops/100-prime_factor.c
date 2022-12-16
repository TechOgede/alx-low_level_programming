#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/

int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int i;

	for (i = 3; i < 12057; i += 2)
	{
		if (num % i == 0 && num != i)
		{
			num /= i;


		}

	}
	printf("%ld \n", num);
	return (0);
}
