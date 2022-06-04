#include <unistd.h>
#include "main.h"

/**
 * _islower - checks if the argument is lowercase
 * @c: the value to be checked
 *
 * Return: 1 if successful, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97)
		return (1);
	else
		return (0);
}
