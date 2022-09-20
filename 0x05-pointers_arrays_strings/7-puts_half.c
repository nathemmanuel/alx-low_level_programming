#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: holds the address of the array
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int a, l;

	l = 0;
	while (*(str + l) != '\0')
	{
		l++;
	}
	for (a = 0; a >= l/2; a++)
		_putchar(*(str + a));
	_putchar('\n');
}
