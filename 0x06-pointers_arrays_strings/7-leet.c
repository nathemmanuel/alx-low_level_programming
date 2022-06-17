#include "main.h"

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

	i = 0;
	j = 0;
	while (*(string + j) != '\0')
	{
		while (i < 5)
		{
			if (*(a + i) == *(string + j)
					|| *(a + i) - 32 == *(string + j))
			{
				*(a + i) = *(b + i);
			}
			i++;
		}
		j++;
	}
	return (string);
}
