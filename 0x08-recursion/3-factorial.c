#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number whose factorial we're trying to find.
 *
 * Return: Value of the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
