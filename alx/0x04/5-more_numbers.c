#include <unistd.h>
#include "main.h"

/**
 * more_numbers - prints the numbers 0-14 ten times
 *
 * Return: No value(void).
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
			if (j > 9)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			// else
				// _putchar(j + '0');
		}
		_putchar('\n');
		i++;
	}
}
