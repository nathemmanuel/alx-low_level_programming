#include "main.h"

/**
 * _strncpy - copies the first n elements of a string to another string
 * @dest: String to be copied to
 * @src: String to be copied
 * @n: The number of characters in src to copy
 *
 * Return: The array (basically, a pointer to) dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; (a < n) && (*(src + a) != '\0'); a++)
		*(dest + a) = *(src + a);
	return (dest);
}
