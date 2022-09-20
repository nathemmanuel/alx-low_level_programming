#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Holds the address of the parameter passed
 *
 * Return: The length of the string, s
 */

int _strlen(char *s)
{
	int a;

	while (*(s + a) != '\0')
	{
		a++;
	}
	return (a);
}
