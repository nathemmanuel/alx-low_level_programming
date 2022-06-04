#include "main.h"
#include <unistd.h>

/**
 * _strcat - This appends the second string to the end of the first string
 * @dest: The base string
 * @src: The string that is appended to the base string
 *
 * Return: Returns 'dest'.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/*
	 * I wanted to find the string length of the first string
	 * before the null byte, and that's where I started 
	 * appending the second from, as long as it hadn't 
	 * gotten to it's own null byte(end).
	 * Then afterwards, I thought to add the null byte after
	 * the loop had completed
	 */
	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return dest;
}
