#include "main.h"

/**
 * _strncat - joins two strings together up to n characters
 * @dest: String to be added to
 * @src: String to be added
 * @n: The number of characters in src to print
 *
 * Return: The array (basically, a pointer to) dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l, a;

	a = 0;
	l = 0;
	while (*(dest + l) != '\0')
		l++;
	while (a <= n)
	{
		*(dest + l) = *(src + a);
		a++;
		l++;
	}
	return (dest);
}
