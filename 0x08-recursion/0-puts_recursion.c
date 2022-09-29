#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: The array of elements to be printed
 *
 * Return: Void
 */

void _puts_recursion(char *s)
{
	int a;

	a = 0;
	if (*(s + a) == '\0')
		return;
	else
	{
		_putchar(*(s + a));
		a++;
		_puts_recursion(s + a);
	}
}
