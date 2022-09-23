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
	int l, a;
	int p;

	a = 0;
	l = 0;
	while (*(s + l) != '\0')
	{
		l++;
	}
	while (a <= n/2 && a <= l)
	{
		p = *(s + l);
		*(s + l) = *(s + a);
		*(s + a) = p;

		l--;
		a++;
	}
}
