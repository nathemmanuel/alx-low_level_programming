#include "main.h"

/**
 * cap_string - capitalises every character in a string
 * @c: The string to be worked on
 *
 * Return: c
 */
char *cap_string(char *c)
{
	int i;

	i = 0;
	while (*(c + i) != '\0')
	{
		if (c[i] = ',' || c[i] == ' ' || c[i] == ';'
				|| c[i] == '.' || c[i] == '!'
				|| c[i] == '"' || c[i] == '('
				|| c[i] == ')' || c[i] == '{'
				|| c[i] == '}')
			i++;
		if (c[i] >= 97 && c[i] <= 122)
			*(c + i) -= 32;
	}
	return (c);
}
