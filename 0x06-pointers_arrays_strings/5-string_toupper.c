#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @c: Original string
 *
 * Return: c
 */

char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (*(c + i) != '\0')
	{
		if (*(c + i) >= 97 && *(c + i) <= 122)
			*(c + i) -= 32;
		i++;
	}
	return (c);
}
