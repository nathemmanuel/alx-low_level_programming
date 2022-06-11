#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times, followed by a new line
 *
 * Return: Void
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j == 14; j++)
		{
			k = 0;
			k += j;

			if (k >= 10)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
				_putchar(k + '0');
			_putchar('\n');
		}
	}
}

