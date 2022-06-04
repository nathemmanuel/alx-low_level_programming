#include <unistd.h>
#include "main.h"

/**
 * rot13 - encodes strings by adding 13 to letters a-m and subtracting 13 from n-z
 * @s: string to be encoded
 *
 * Return: s
 */
char *rot13(char *s)
{
	int i; 
	int j;
	char *x = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *y = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
			}
		}
	}
	return s;
}
