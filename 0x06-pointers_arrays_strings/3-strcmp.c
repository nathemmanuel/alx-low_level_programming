#include "main.h"

/**
 * _strcmp - Compares two strings and returns the difference
 * between the first two dissimilar characters
 * @s1: First string
 * @s2: Second string
 *
 * Return: s2[a] - s1[a]
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	for (n = 0; (s1[n] != '\0') && (s2[n] != '\0'); n++)
	{
		if (s1[n] == s2[n])
			n++;
		else if (s1[n] != s2[n])
			return (s2[n] - s1[n]);
	}
	return (0);
}
