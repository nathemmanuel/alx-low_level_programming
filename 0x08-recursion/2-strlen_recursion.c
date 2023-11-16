#include "main.h"

/**
 * _strlen_recursion - returns the length of
 * a string recursively
 * @s: Pointer to the first element of the string
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*(s + i) == '\0')
		return (i);
	i++;
	_strlen_recursion(s + 1);
}
