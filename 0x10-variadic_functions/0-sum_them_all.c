#include "variadic_functions.h"

/**
 * sum_them_all - sums all the arguments
 * @n: The number of arguments that the function will take
 *
 * Return: The sum of all the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum;
	unsigned int i;
	va_start(list, n);

	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	return (sum);
}
