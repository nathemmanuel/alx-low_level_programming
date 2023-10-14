#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	va_start(strings, n);

	for (int i = 0; i < n; i++)
	{
		printf("%s", va_arg(strings, char *));
		if (*(separator) == "NULL")
		{
			i++;
		}
		else if (i < (n - 1))
		{
			printf("%s ", separator);
		}
	}
	_putchar('\n');
}
