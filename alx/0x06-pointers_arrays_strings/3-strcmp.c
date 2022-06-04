#include "main.h"
#include <unistd.h>

/**
 * _strcmp - compares two strings until it finds different characters
 * @s1: the reference string
 * @s2: the string which is compared
 *
 * Return: The difference in the first two non-matching charcaters
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	/*
	 * The way the strcmp function works is that it
	 * checks through both strings and when it finds
	 * the first two unequal characters, it returns the
	 * difference between them, s1[i] - s2[i]
	 * Else, it returns 0 if the strings are equal
	 */
	i = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}
		i++;
	}
	return (0);
}
