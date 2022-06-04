#include "main.h"
#include <unistd.h>

/**
 * _strncat - appends up to n elements of second string to the first
 * @dest: Base string
 * @src: String to be appended
 * @n: number of elements to be appended to the base string
 *
 * Return: Updated string, 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j <= n)
	{
		*(dest + (i + 1)) = *(src + j);
	}
	return (dest);
}
