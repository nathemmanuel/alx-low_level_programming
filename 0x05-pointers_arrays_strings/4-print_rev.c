#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: holds the address of the array
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int l;

	l = 0;
	while (*(s + l) != '\0')
	{
		l++;
	}
	l--;
	while (l >= 0)
	{
		_putchar(*(s + l));
		l--;
	}
	_putchar('\n');
}
