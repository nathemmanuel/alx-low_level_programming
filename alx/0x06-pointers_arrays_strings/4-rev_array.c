#include <unistd.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array up to n elements
 * @n: number of elements in the array
 * @a: string to be reversed
 *
 * Return: Nothing (void)
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n--)
	{
		j = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = j;
		i++;
	}
}
