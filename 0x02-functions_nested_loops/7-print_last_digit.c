#include "main.h"

/**
 * print_last_digit - computes the last digit of the value entered
 * @n: Number to be checked
 *
 * Return: the last digit of the variable, n
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar(((n % 10) * -1) + '0');
		return ((n % 10) * -1);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}
