#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 * it with a specific char
 * @size: This represents the size of the array
 * @c: This is the initializing character
 *
 * Return: NULL if size is 0, returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *some_array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	some_array = malloc(size * sizeof(char));
	if (some_array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(some_array + i) = c;
	} 

	return (some_array);
}
