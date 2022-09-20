#include "main.h"
#include <stdio.h>

/**
 * print_array - prints up to n characters of a string
 * @a: holds the address of the string
 * @n: The number of characters that should be printed
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int l;

	l = 0;
	while (l < n)
	{
		printf("%d", a[l]);
		if (l != (n - 1))
		{
			printf(", ");
		}
		l++;
	}
	_putchar('\n');
}
