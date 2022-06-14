#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string that it accepts
 *
 * Return: The length of a string
 */

int _strlen(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
		n++;
	return (n);
}
