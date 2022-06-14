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
// 0123456789 
	while (*(str + l) != '\0')
		l++;
	n = l / 2;
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
}
