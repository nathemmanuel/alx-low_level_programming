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
			_putchar((i * j) + '0');
			if ((i * j) > 9)
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			if(j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
