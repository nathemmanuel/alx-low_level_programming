#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the first n elements of an array
 * @a: the array
 * @n: The number of elements to be printed
 *
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d", *(a + i));
	_putchar('\n');
}
