#include "main.h"

/**
 * _strcmp - compares two strings;
 * returns the difference between the first two dissimilar characters
 * @s1: First string
 * @s2: Reference string
 *
 * Return: the difference between the first two different characters
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s2 + i) != '\0')
	{
		if (*(s2 + i) != *(s1 + i))
			return (*(s2 + i) - *(s1 + i));
		i++;
	}
}
