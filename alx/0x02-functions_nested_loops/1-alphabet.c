#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - prints the entire alphabet in lowercase
 *
 * Return: No value(void)
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
