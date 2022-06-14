#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: Holds the address of the 0th element in the array
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
