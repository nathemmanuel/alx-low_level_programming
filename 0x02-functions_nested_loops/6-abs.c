#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The variable to be checked
 *
 * Return: The absolue value of n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
