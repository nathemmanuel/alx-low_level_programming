#include "main.h"

/**
 * print_line - prints the character '_' n times
 * @n: Determines the number of '_' that'll be printed
 *
 * Return: Void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
