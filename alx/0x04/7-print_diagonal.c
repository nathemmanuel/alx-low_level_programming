#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - prints the character '\' n times
 * @n: The number of tuimes the diagonal should be printed
 *
 * Return: No value (void).
 */
void print_diagonal(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('\');
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
