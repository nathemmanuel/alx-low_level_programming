#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Void
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		for(m = 0; m <= 59; m++)
		{
			if (m < 10)
				_putchar('0');
			_putchar((m / 10) + '0');
                	_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
