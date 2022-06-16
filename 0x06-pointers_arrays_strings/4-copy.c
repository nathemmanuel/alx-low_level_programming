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
	//13
	int i, m, l; // l is counter, m is dummy variable, i is loop variable, n is number of characters you want to switch

	l = 0;
	while (*(a + l) != '\0')
		l++;
	l--; // l=12
	n--; // n = 12
	for (i = 0; i < l / 2; i++)
	{
		/*
		 * m = a[0]; a[0] = a[12-0]; a[12] = m
		 * (i = 1) m= a[1]; a[1] = a[12 - 1]; a[11] = m
		 * (i = 2) m = a[2]; a[2] = a[12 - 2]; a[10] = m
		 * (i = 3) m = a[3]; a[3] = a[12-3]; a[9] = m
		 * (i = 4) m = a[4]; a[4] = a[12 - 4]; a[8] = m
		 * (i = 5) m = a[5]; a[5] = a[12-5]; a[7] = m
		 * 
		 */
		m = *(a + i);
		*(a + i) = *(a + n - i);
		*(a + n - i) = m;
	}
}
