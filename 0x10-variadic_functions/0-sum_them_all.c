#include "variadic_functions.h"

/**
* sum_them_all - variadic function that
* sums the numbers passed to the function
* @n: number of numbers to be summed up
*
* Description: uses the va macros
* Return: int denoting the sum of the numbers
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
