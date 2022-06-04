#include <unistd.h>
#include "main.h"

/**
 * leet - encodes numbers into the string
 * @string: string to be encoded
 *
 * Return: Updated string leet
 */
char *leet(char *string)
{
	int i, j;
	char letter[5] = {'a', 'e', 'o', 't', 'l'};
	char number[5] = {'4', '3', '0', '7', '1'};

	i = 0;
	j = 0;
	while (string[j] != '\0')
	{
		while (i < 5)
		{
			if (letter[i] == string[j] || (letter[i] - 32) == string[j])
			{
				string[j] = number[i];
			}
			i++;
		}
		i = 0;
		j++;
	}
	return (string);
}
