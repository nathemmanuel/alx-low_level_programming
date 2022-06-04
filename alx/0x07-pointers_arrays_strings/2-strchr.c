#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * _strchr - returns the pointer to the first occurence of the c
 * @s: The string to be looped through
 * @c: The character to check for
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return NULL;
}
