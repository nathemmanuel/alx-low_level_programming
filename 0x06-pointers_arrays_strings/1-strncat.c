#include "main.h"

/**
 * _strncat - This appends the string src to dest up to n characters
 * @dest: This is the string to which src is appended
 * @src: This is the string that is appended
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, d;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	while (d < n)
	{
		*(dest + i + d) = *(src + d);
		d++;
	}
	return (dest);
}
