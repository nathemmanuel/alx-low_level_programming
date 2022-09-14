#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 *
 * Return: No return value (void)
 */

void print_alphabet_x10(void)
{
	int a, n;

	for (n = 0; n < 10; n++)
	{
		for (a = 97; a <= 122; a++)
			_putchar(a);
		_putchar('\n');
	}
}
