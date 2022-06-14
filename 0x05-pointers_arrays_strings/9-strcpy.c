#include "main.h"

/**
 * _strcpy - copies a string into another
 * @src : string to be copied
 * @dest: destination string
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	i = 0;
	while (*(src + i) != '\0')
		i++;
	for (n = 0; n <= i; n++)
		*(dest + n) = *(src + n);
	return (dest);
}
