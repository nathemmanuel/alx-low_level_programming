#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory which contains a copy of the string given as a parameter
 * @str: This is the string
 *
 * Return: Returns a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	int i, n;
	char *ptr;

	i = 0, n = 0;
	while (*(str + i) != '\0')
		i++;
	ptr = malloc(i * sizeof(char));

	for (n = 0; n < i; n++)
		*(ptr + n) = *(str + n);
	return (ptr);
}
