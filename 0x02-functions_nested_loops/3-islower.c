#include "main.h"

/**
 * _islower - checks if a character entered is lower case
 * @c: Integer value. Holds ASCII value of the character
 *
 * Return: 1 if lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
