#include "main.h"

/**
 * _strcat - joins two strings together
 * @dest: String to be added to
 * @src: String to be added
 *
 * Return: The array (basically, a pointer to) dest
 */

char *_strcat(char *dest, char *src)
{
	int l, a;

	a = 0;
	l = 0;
	while (*(dest + l) != '\0')
		l++;
	while (*(src + a) != '\0')
	{
		*(dest + l) = *(src + a);
		a++;
		l++;
	}
	return (dest);
}
