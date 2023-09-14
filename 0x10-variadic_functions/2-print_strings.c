#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: Tseparator
 * @n: number of strings
 * @...: number of strings to be printed.
 * Description: If separator is NULL it is not printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings_list;
	char *str;
	unsigned int index;

	va_start(strings_list, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings_list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings_list);
}
