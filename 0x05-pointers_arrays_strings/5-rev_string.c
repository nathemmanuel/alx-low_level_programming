#include "main.h"

/**
 * rev_string - This reverses a string
 * @s: String that is reversed
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int n, i, l;
	char c;

	n = 0;
	l = 0;
	while (*(s + l) != '\0')
		l++;
	l--;

	for (i = 0; i <= l / 2; i++)
	{
		*(s + n) = c;
		*(s + n) = *(s + (l - n));
		*(s + (l -n)) = c;
		n++;
	}
}
