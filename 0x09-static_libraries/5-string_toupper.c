#include "main.h"

/**
 * string_toupper - changes all the lowercase letters of a string to uppercase
 * @str: The sting to be tweaked
 *
 * Return: The pointer to the array, str
 */
char *string_toupper(char *str)
{
	int a;

	a = 0;
	while (*(str + a) != '\0')
	{
		if (*(str + a) >= 97 && *(str + a) <= 122)
			*(str + a) -= 32;
		a++;
	}
	return (str);
}
