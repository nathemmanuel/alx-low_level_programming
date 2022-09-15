#include "main.h"

/**
 * print_line - prints as many lines as the argument dictates
 * @n: The number of times the line is printed
 *
 * Return: Void
 */

void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
