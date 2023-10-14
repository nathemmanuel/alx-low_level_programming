#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: String that is used to separate numbers
 * @n: number of integers to expect
 *
 * Return: Nothing (void)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	va_start(numbers, n);

	for (int i = 0; i <= n; i++)
	{
		printf("%d%c ", va_arg(numbers, int));
	}
	_putchar('\n');
	va_end(numbers);
}
