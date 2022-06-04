#include <unistd.h>
#include "main.h"

/**
 * _strpbrk - returns the address of the first occurrence of
 * any of the elements in accept in s
 * @s: string to be checked
 * @accept: reference string
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
