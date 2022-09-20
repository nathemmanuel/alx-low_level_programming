#include "main.h"

/**
 * _puts - prints a string, followed by a newline
 * @str: Holds the address of the first element
 * of the array to be passed to it
 *
 * Return: Void
 */
void _puts(char *str)
{
	int a;

	while (*(str + a) != '\0')
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
