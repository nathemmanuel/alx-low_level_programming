#include <unistd.h>
#include "main.h"

/**
 * print_line - prints a '-' character n times.
 * @n: The amount of times the '-' character is printed
 *
 * Return: Void (no value).
 */
void print_line(int n)
{
	int i;

	i = 0;
	if ((n < 0) || (n == 0))
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
