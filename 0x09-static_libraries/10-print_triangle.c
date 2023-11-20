#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: Size of the triangle
 *
 * Return: Void
 */

void print_triangle(int size)
{
	int l, b, s, h;

	for (l = 1; l <= size; l++)
	{
		// for (b = 1; b <= size; b++)
		// {
			for (s = 1; s <= (size - s); s++)
				_putchar(' ');
			for (h = (s); h <= size; h++)
				_putchar('#');
		// }
		_putchar('\n');
	}
	_putchar('\n');
}
