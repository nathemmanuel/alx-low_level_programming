#include "main.h"
#include <unistd.h>

/**
 * print_rev - prints a string in reverse
 * @s: the array
 *
 * Return: Nothing(void)
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
