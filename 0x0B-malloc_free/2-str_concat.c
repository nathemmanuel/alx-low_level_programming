#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: First array
 * @s2: Second array
 *
 * Return: Newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, m, l;
	char *s3;

	i = 0;
	j = 0;
	l = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	s3 = malloc((i + j) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	while (l < i)
	{
		s3[l] = s1[l];
		l++;
	}
	m = 0;
	while (m < j)
	{
		s3[l] = s2[m];
		m++;
	}
	return (s3);
	free(s3);
}
