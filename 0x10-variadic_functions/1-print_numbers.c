#include "variadic_functions.h"

/**
* print_numbers - prints numbers to stdout
* @separator: char used as delimiter
* @n: num of ints passed
*
* Description: employs the use of variadic macros
* Return: no return value
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
