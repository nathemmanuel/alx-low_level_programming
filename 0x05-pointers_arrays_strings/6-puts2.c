#include "main.h"

/**
 * puts2 - Prints every other character of a string to stdout
 * @str: The string to be printed to the output
 *
 * Return: Void
 */

void puts2(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n += 2;
	}
	_putchar('\n');
}
