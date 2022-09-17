#include "main.h"

/**
 * print_diagonal - prints as many diagonal lines as the argument dictates
 * @n: The number of times the diagonal line is printed
 *
 * Return: Void
 */

void print_diagonal(int n)
{
	int a, b;

	a = 1;
	if (n > 1)
	{
		for (a = 1; a <= n; a++)
		{
			b = 1;
			while (b <= (a - 1))
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
