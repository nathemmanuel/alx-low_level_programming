#include <unistd.h>
#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - returns the number of matching characters 
 * @s: Checks s for characters in accept
 * @accept: Reference array
 *
 * Return: number of matching characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int n;

	n = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (s[i] != accept[j])
			{
				return n;
			}
			else
				n++;
		}
	}
}
