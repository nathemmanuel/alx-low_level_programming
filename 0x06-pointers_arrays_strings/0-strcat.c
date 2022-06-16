#include "main.h"

/**
 * _strcat - appends src to the dest string
 * @dest: Destination string
 * @src: Source string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	i = 0;
	n = 0;
	while (*(dest + i) != '\0')
		i++;
	while (*(src + n) != '\0')
	{
		*(dest + i + n) = *(src + n);
		n++;
	}
	return (dest);
}
