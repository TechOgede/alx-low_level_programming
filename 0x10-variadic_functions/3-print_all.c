#include "variadic_functions.h"

/**
* print_all - prints everything
* @format: char array of argument types
*
* Description: employs the use of va macros
* Return: no return value
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *str_arg;

	va_start(ap, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
					break;
			case 'i':
				printf("%d", va_arg(ap, int));
					break;
			case 'f':
				printf("%f", va_arg(ap, double));
					break;
			case 's':
				str_arg = va_arg(ap, char *);
				if (str_arg != NULL)
				{
					printf("%s", str_arg);
					break;
				}
				str_arg = "(nil)";
				printf("%s", str_arg);
				break;
		}

		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
				format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");

}
