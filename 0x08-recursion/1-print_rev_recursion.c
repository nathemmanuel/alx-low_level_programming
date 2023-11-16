#include "main.h"

/**
 * _print_rev_recursion - prints a string
 * in reverse, recursively
 * @s: Pointer to the first element in
 * the string
 *
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	int l;

	l = 0;
	while (*(s + l) != '\0')
	{
		l++;
	}
	l -= 1;
	if ((l - 1) <= 0)
		return;
	_putchar(*(s + l));
	_print_rev_recursion(s + (l - 1));
}
