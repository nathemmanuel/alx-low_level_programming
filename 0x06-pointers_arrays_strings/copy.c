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

	j = 0;
	while (*(str + j) != '\0')
	{
		i = 0;
		while (i < 13)
		{
			if (*(a + i) == *(str + j)
					|| *(a + i) - 32 == *(str + j))
			{
				*(str + j) = *(b + i);
			}
			else if (*(b + i) == *(str + j)
					|| *(b + i) - 32 == *(str + j))
				*(str + j) = *(a + i);
			i++;
		}
		j++;
	}
	return (str);
}
