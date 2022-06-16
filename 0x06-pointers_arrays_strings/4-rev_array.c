#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: the array of integers
 * @n: number of elements to swap
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i, l;

	l = 0;
	while (*(a + l) != '\0')
		l++;
	l--;
	for (i = 0; i <= n / 2; i++)
	{
		*(a + i) = m;
		*(a + i) = *(a + l - i);
		*(a + l - i) = m;
	}
}
