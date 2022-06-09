#include "main.h"

/**
 * times_table - prints the multiplication table from zero to nine
 *
 * Return: Void
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j);
			if ((i * j) > 9)
			{
				_putchar((i*j)/10);
				_putchar((i*j) % 10);
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}
