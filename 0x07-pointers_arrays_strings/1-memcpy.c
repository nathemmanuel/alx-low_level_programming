# include "main.h"

/**
 * _memcpy - copies the first n bytes of the memory area
 * pointed to by src to memory area dest
 * @src: The array whose elements will be copied
 * @dest: The destination array
 * @n: The number of elements of the array you want to copy
 *
 * Return: The pointer to the memory area dest
 */

/*
 * Arrays are memory areas because they take up as many places
 * in memory as their elements need
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
