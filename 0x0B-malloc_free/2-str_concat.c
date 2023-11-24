#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: NULL (fail), a new pointer pointing
 * to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, n;
	char *str;

	if ((s1 == NULL) ||
			(s2 == NULL))
	{
		return (NULL);
}
