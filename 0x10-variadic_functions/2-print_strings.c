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
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
