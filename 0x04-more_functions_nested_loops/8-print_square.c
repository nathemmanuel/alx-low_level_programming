#include "main.h"

/**
 * print_square - prints a square the size of the argument
 * @size: The size of the square
 *
 * Return: Void
 */

void print_square(int size)
{
	int l, b;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
