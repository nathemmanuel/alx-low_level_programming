# include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with a constant byte b
 * @s: The pointer that holds the address of the array to
 * be manipulated
 * @b: The constant byte
 * Return: The pointer to the memory area s
 */

/*
 * So we can say that s is an array, and what we're trying to do
 * is fill the first n elements of that array with a constant byte b
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
