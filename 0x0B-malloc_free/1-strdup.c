#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a duplicate string
 * @str: The string to be duplicated
 *
 * Return: Pointer to the new string
 */
char *_strdup(char *str)
{
	int i, j;
	char *strn;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	strn = malloc(i * sizeof(char));
	if (strn == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (; j < i; j++)
	{
		strn[j] = str[j];
	}
	return (strn);
	free(strn);
}
