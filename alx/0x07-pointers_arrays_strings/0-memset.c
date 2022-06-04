#include <unistd.h>
#include "main.h"

/**
 * _memset - changes the first n elements of s to b
 * @s: The pointer
 * @n: The number of elements to be modified
 * @b: The constant character wuth which they're modified
 *
 * Return: The updated pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
