#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the first n characters of array
 * @s: holds the address of the array
 * @n: Is how many characters you should reverse
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int l, d;
	int p;

	d = 0;
	l = 0;
	while (*(a + l) != '\0')
	{
		l++;
	}
	printf("%d\n", l);
	while (d <= n/2 && d <= l)
	{
		p = *(a + l);
		*(a + l) = *(a + d);
		*(a + d) = p;

		l--;
		d++;
	}
}
