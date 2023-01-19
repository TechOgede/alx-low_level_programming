#include "variadic_functions.h"

/**
* print_strings - prints strings to stdout
* @separator: string used as delimiter
* @n: num of strings passed
*
* Description: employs the use of variadic macros
* Return: no return value
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("%s", "(nil)");
		printf("%s", str);

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
