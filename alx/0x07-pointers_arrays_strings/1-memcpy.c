#include <unistd.h>
#include "main.h"

/**
 * _memcpy - copies n elements from src to dest
 * @dest: The string to be updated with src
 * @src: The string dest is updated with
 * @n: The number of elements copiied to dest from src
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
