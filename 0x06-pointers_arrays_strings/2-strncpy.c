#include "main.h"

/**
 * _strncpy - copies the first n characters of src to dest
 * @dest: Destination string
 * @src: String that the text is copied from
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
