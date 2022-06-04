#include <unistd.h>
#include "main.h"

/**
 * _isupper - checks if the character entered is uppercase
 * @c: The charcter to be checked
 *
 * Return: 1(success), 0(otherwise)
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
