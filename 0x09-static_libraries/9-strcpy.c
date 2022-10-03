#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * to the one pointed to by dest
 * @dest: Points to the destination string
 * @src: Points to the source string
 *
 * Return: The pointer, dest
 */

char *_strcpy(char *dest, char *src)
{
	int l;

	l = 0;
	while (*(src + l) != '\0')
	{
		*(dest + l) = *(src + l);
		l++;
	}
	*(dest + l) = src[l];
	return (dest);
}
