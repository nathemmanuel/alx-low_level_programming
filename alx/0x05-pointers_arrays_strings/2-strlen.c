#include "main.h"

/**
 * _strlen - prints the length of the string argument
 * @s: the string argument used.
 *
 * Return: s, which is the length of the string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
