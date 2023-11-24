#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: This is the size of the array
 * @c: This is the char that initializes it
 *
 * Return: NULL (if size = 0); Pointer to
 * array if successful; NULL if memory
 * allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *var;

	i = 0;
	if (size == 0)
		return (NULL);
	var = malloc(size * sizeof(char));
	if (var == NULL)
		return (NULL);
	while (i < size)
	{
		*(var + i) = c;
		i++;
	}
	return (var);
}
