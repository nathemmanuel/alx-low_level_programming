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
	int i;

	i = 0;
	if (size == 0)
		return (NULL);
	some_array = malloc(sizeof(size));
	if (some_array == NULL)
		return (NULL);
	while (*(some_array + i) != '\0')
	{
		*(some_array + i) = c;
		i++;
	} 

	return (some_array);
}
