#include "main.h"

/**
 * print_diagonal - prints the character '\' n times
 * @n: Determines the number of '\' that'll be printed
 *
 * Return: Void
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
		_putchar('\n');
}
