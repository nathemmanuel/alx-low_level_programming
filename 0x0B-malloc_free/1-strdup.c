#include "main.h"

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: The string that we're duplicating
 *
 * Return: NULL (if str = NULL), returns the
 * address to the memory allocated with malloc
 */

char *_strdup(char *str)
{
	int i;
	char *s;

	i = 0;
	s = malloc(sizeof(str));
	while (*(str + i) != '\0')
	{
		*(s + i) = *(str + i);
		i++;
	}
	return (s);
}
