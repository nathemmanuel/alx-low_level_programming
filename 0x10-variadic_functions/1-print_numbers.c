#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers passed to it, with a predefined separator
 * @separator: The separator to be used
 * @n: The number of arguments the function takes
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if ((i != (n - 1)) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
