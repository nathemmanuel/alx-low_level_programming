#include <unistd.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number to be computed
 *
 * Return: The absolute value computed
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return ((-1 * n));
}
