#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Nothing (void)
 */

void swap_int(int *a, int *b)
{
	/* The strategy is to use a placeholder variable */
	int p;

	p = *b;
	*b = *a;
	*a = *b;
}
