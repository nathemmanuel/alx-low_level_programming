#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @str: The string to capitalise
 *
 * Return: The pointer to the string
 */

char *cap_string(char *str)
{
	int a; /* counting variable */

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] == ' ' || str[a] == '\t' || str[a] == '\n'
					|| str[a] == ',' || str[a] == ';'
					|| str[a] == '.' || str[a] == '!'
					|| str[a] == '?' || str[a] == '"'
					|| str[a] == '(' || str[a] == ')'
					|| str[a] == '{' || str[a] == '}')
				&& (str[a + 1] >= 97 && str[a + 1] <= 122))
			str[a + 1] -= 32;
		a++;
	}
	return (str);
}
