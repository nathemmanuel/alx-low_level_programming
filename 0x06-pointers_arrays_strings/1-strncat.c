#include "main.h"

/**
 * _strncat - This appends the string src to dest up to n characters
 * @dest: This is the string to which src is appended
 * @src: This is the string that is appended
 * @n: number of characters to append
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, d;

	i = 0;
	d = 0;
	while (*(dest + i) != '\0')
		i++;
	while (d < n && *(src + d) != '\0')
	{
		*(dest + i + d) = *(src + d);
		d++;
	}
	*(dest + i + d) = '\0';
	return (dest);
}
