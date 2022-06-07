#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer value passed to it
 *
 * Return: n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * (-1));
}
