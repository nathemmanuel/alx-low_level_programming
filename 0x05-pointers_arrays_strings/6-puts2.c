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
	for (n = 0; *(str + n) != '\0'; n += 2)
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}
