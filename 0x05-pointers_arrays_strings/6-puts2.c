#include "main.h"

/**
 * puts2 - prints a character every other time
 * @str: holds the address of the array
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int l;

	l = 0;
	while (*(str + l) != '\0')
	{
		_putchar(*(str + l));
		l += 2;
	}
	_putchar('\n');
}
