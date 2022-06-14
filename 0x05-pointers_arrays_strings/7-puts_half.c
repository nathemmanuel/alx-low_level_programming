#include "main.h"

/**
 * puts_half - prints the last half of a string
 * @str: The string to be printed
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int n, l;

	while (*(str + l) != '\0')
		l++;
	l--;
	for (n = (l / 2); *(str + n) != '\0'; n++)
		_putchar(*(str + n));
}
