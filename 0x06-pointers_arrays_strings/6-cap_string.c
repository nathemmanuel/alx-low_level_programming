#include "main.h"

/**
 * cap_string - capitalises every character in a string
 * @c: The string to be worked on
 *
 * Return: c
 */

char *cap_string(char *c)
{
	int i, position;

	i = 0;
	while (*(c + i) != '\0')
	{
		if (*c >= 97 && *c <= 122)
			*c -= 32;
		else if (c[i] == ',' || c[i] == ' '
				|| c[i] == ';' || c[i] == '{'
				|| c[i] == '}' || c[i] == '('
				|| c[i] == ')' || c[i] == '"'
				|| c[i] == '?'
				|| c[i] == '.' || c[i] == '!'
				|| c[i] == '\n' || c[i] == '\t')
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
			{
				position = c[i + 1] - 'a';
				c[i + 1] = 'A' + position;
			}
		}
		i++;
	}
	return (c);
}
