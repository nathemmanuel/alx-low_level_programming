#include <unistd.h>
#include "main.h"

/**
 * _isdigit - checks if the argument entered is a digit
 * @c: The number to be checked
 *
 * Return: 1(success), 0(otherwise)
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
