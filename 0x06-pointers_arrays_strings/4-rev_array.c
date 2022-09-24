#include "main.h"

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
	while (*(s + l) != '\0')
	{
		l++;
	}
	while (d <= n/2 && d <= l)
	{
		p = *(s + l);
		*(s + l) = *(s + d);
		*(s + d) = p;

		l--;
		d++;
	}
}
