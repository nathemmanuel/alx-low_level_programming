#include "main.h"

/**
 * _puts - prints the string to stdout
 * @str: The string to be printed to the output
 *
 * Return: Void
 */

void _puts(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
