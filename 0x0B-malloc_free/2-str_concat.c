#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Returns a pointer to a newly allocated space in memory
 * containing the concatenated string. NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int i, n, c;
	char *ptr;

	i = 0, n = 0;
	while (*(s1 + i) != '\0')
		i++; /* Equivalent of strlen */
	while (*(s2 + n) != '\0')
		n++; /* Finds the length of s2 */
	ptr = malloc((i + n) * sizeof(char));
	/* Allocates that much space */

	c = 0;
	while (*(s1 + c) != '\0')
	{
		*(ptr + c) = *(s1 + c); 
		/* copies the string to the location of the pointer */
		c++;
	}
	c = 0;
	while (*(s2 + c) != '\0')
	{
		*(ptr + i) = *(s2 + c);
		i++, c++;
	}
	return (ptr);
}
