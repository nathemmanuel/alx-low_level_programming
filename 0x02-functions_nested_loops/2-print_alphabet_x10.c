#include "main.h"

/**
 * print_alphabet_x10 - prints the entire alphabet in lowercase ten times
 *
 * Return: Void
 */

void print_alphabet_x10(void)
{
	char c;
	int n;

	while (n <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		n++;
	}
}
