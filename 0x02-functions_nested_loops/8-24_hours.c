#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Void
 */

void jack_bauer(void)
{
	int h, m, s;

	for (h = 0; h <= 23; h++)
	{
		_putchar((h/10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		for(m = 0; m <= 5; m++)
		{
			_putchar(m + '0');
			for (s = 0; s == 10; s++)
			{
				_putchar(s + '0');
			}
		}
	}
}
