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
		l++; /* string length */
	}
	if (l % 2 == 0) /* Even test */
	{
		for (a = l / 2 ; (a >= (l / 2) && a <= (l - 1)); a++)
		{
			_putchar(*(str + a));
		}
	}
	else
		for (a = l / 2; (a >= (l - 1) / 2) && (a <= l - 1); a++)
			_putchar(*(str + a));
	_putchar('\n');
}
