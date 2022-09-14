#include "main.h"

/**
 * times_table - prints the times table from 0 to 9
 *
 * Return: Void
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c > 9)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			if (b != 9)
			{
				_putchar(',');
				if (c < 10)
					_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
