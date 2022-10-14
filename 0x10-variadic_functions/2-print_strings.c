#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, separated by a separator
 * @separator: The separator to be used
 * @n: The number of arguments the function takes
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(list, char *);
		if (str == NULL)
			printf("(nil)");
		printf("%s", str);
		if ((i != (n - 1)) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
