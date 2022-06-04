#include "main.h"
#include <unistd.h>

/**
 * rev_string - reverses a string without printing it
 * @s: The array, character by character
 *
 * Return: Nothing(void)
 */
void rev_string(char *s)
{
	int i, j;
	char h;

	i = 0;
	j = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	i -= 1;
	while (j <= (i / 2))
	{
	h = *(s + j);
	*(s + j) = *(s + i);
	*(s + i) = h;
	j++;
	i--;
	}
	/* 
	 * Mm, to reverse is to make s[9] = s[0] and vice versa; s[8] = s[1}
	 * s[1] = s[8]; s[7] = s[2], s[2] = s[7]; s[6] = s[3], s[3] = s[6];
	 * s[5] =s[4], s[4] = s[5]
	 * */
}
