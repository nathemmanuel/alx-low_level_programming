#include <unistd.h>
#include "main.h"

/**
 * print_most_numbers - prints every number from 0 to 9 except 2 and 4
 *
 * Return: No value(void).
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
		if ((i == '1') || (i == '3'))
			i++;
	}
	_putchar('\n');
}
