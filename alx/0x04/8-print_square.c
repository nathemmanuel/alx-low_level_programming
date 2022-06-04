#include <unistd.h>
#include "main.h"

/**
 * print_square - prints a square the size of the argument.
 * @size: size of the square.
 *
 * Return: No value(void).
 */
void print_square(int size)
{
	int i;
	int j;

	i = 0;
	while (i <= size)
	{
		for (j = 0; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i++;
	}
}
