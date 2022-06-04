#include "main.h"
#include <unistd.h>

/**
 * _strcpy - copies 'src' to 'dest'
 * @dest: The receiving string
 * @src: The copied string
 *
 * Return: Updated string 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(src + i) != '\0')
	{
		i++;
	}
	while (j <= i)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	return (dest);
}
