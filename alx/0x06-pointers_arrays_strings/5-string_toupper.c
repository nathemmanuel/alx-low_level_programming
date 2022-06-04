#include <unistd.h>
#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @lowercase: the string it receives and checks for lowercase 
 *
 * Return: lowercase
 */
char *string_toupper(char *lowercase)
{
	int i;
	/* counter */

	i = 0;
	while (*(lowercase + i) != '\0') /* lowercase [i] */
	{
	if (*(lowercase + i) >= 97 && *(lowercase + i) <= 122)
	{
		*(lowercase + i) -= 32;
	}
	i++;
	}
	return (lowercase);
}
