#include "main.h"
#include <unistd.h>

/**
 * _strncpy - copies the first n elements of the str to dest
 * @dest: The string which receives the first n elements 
 * @str: The string to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;


	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
