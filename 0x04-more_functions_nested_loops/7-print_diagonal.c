#include "main.h"

/**
 * print_diagonal - prints as many diagonal lines as the argument dictates
 * @n: The number of times the diagonal line is printed
 *
 * Return: Void
 */

void print_diagonal(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
