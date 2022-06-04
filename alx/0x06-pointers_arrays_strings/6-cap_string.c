#include <unistd.h>
#include "main.h"

/**
 * cap_string - capitalizes the first letter of the letters
 * in the string
 * @letter: the string
 *
 * Return: letter
 */
char *cap_string(char *letter)
{
	int i;

	if (letter[0] >= 'a' && letter[0] <= 'z')
	{
		letter[0] -= 32;
	}
	for (i = 0; letter[i] != '\0'; i++)
	{
		switch (letter[i])
		{
			case ' ':
			case ',':
			case ':':
			case '.':
			case ';':
			case '!':
			case ')':
			case '?':
			case '\n':
			case '\t':
			case '\"':
			case '(':
			case '{':
			case '}':
			if (letter [i + 1] >= 'a' && letter[i + 1] <= 'z')
			{
				letter[i +  1] -= 32;
			}
		}
	}
	return letter;
}
