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
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
			printf("%d%s", va_arg(ap, int), separator);
		else
			printf("%d", va_arg(ap, int));
	}
	printf("%d", va_arg(ap, int));
	printf("\n");
	va_end(ap);
}
