#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parammeters
 * @n: The number of parameters used
 *
 * Return: An integer
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list args;
	va_start(args, n);

	for (int i = 0; i<= n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
