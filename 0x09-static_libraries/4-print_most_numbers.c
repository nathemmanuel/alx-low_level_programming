#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: Void
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 50 || c == 52)
			c++;
		_putchar(c);
		_putchar('\n');
	}
}
