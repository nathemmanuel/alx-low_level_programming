#include "main.h"
#include <unistd.h>

/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: > 0 if the first string is greater than the second;
 * < 0 if it is less; 0 if same
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (((*(s1 + i)) && (*(s2 + i))) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}
	}
	return (0);
}
