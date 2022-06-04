#include "main.h"

/**
 * swap_int - This swaps the values of the arguments passed to it
 * @a: one of the values to be swapped
 * @b: the other value to be swapped
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *b;
	*b = *a;
	*a = m;
}
