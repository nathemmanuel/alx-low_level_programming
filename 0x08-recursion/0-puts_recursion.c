#include "main.h"

/**
 * _puts_recursion - prints a string recursively,
 * followed by a new line
 * @s: The pointer to the first element
 *
 * Return: Void
 */

void _puts_recursion(char *s)
{
	/*
	 * for a recursive operation, I was told
	 * to always include an exit operation, so
	 * what is that exit condition now?
	 * When s[] hits '\0'
	 */
	if (*(s) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion((s + 1));
}
