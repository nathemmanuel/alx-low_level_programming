#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars (a string)
 * and initialzes it with a specific char
 * @size: Size of the space to be allocated
 * @c: The char it will be initialised with
 *
 * Return: A pointer to the array or NULL (fail)
 */

char *create_array(unsigned int size, char c)
{
	char *strng;

	strng = malloc(size * sizeof(char));
	strng[0] = c;
	if (size  == 0)
		return NULL;
	if (strng == NULL)
		return NULL;
	free(strng);
	return (strng);
}
