#include "main.h"

/**
 * _isalpha - checks if a character entered is lower case
 * @c: Integer value. Holds ASCII value of the character
 *
 * Return: 1 if lower or uppercase, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
