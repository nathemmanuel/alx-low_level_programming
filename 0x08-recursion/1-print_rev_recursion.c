#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: The array to be printed
 *
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	int a;

	a = 0;
	if (a < 0)
		return;
	if (*(s + a) == '\0')
		return;
	a++;
	_print_rev_recursion(s + a);
}
