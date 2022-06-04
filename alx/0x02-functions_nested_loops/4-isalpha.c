#include <unistd.h>
#include "main.h"

/**
 * _isalpha - checks if the argument is a letter, whether lower or uppercase
 * @c: The value to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65) && (c <= 122))
	{
		if ((c > 90) && (c < 97))
			return (0);
		return (1);
	}
	return (0);
}
