#include "main.h"
#include <stdio.h>

/**
 * leet - replaces certain characters with digits
 * @string: String
 *
 * Return: string
 */

char *leet(char *string)
{
	int i, j;

	char a[] = {'a', 'e', 'o', 't', 'l'};
	char b[] = {'4', '3', '0', '7', '1'};

	j = 0;
	while (*(string + j) != '\0')
	{
		i = 0;
		while (i < 5)
		{
			if (a[i] == string[j]
					|| ((a[i] - 32) == string[j]))
			{
				string[j] = b[i];
			}
			i++;
		}
		j++;
	}
	return (string);
}
