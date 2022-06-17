#include "main.h"

/**
 * rot13 - replaces each letter by it's partner 13 characters further
 * along the alphabet e.g a = n
 * @str: string
 *
 * Return: str
 */

char *rot13(char *str)
{
	int i, j;

	char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
	char b[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	i = 0;
	j = 0;
	while (*(str + j) != '\0')
	{
		while (i < 13)
		{
			if (*(a + i) == *(str + j)
					|| *(a + i) - 32 == *(str + j))
			{
				*(a + i) = *(b + i);
			}
			if (*(b + i) == *(str + j)
					|| *(a + i) - 32 == *(str + j))
				*(b + i) = *(a + i);
			i++;
		}
		j++;
	}
	return (str);
}
