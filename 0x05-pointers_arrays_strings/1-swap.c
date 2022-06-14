#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
