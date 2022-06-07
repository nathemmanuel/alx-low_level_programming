#include "main.h"

/**
 * print_sign - prints either a +(plus), 0(zero) or -(minus) depending on the number
 * @n: Holds the value passed into the function
 *
 * Return: 1 if positive, 0 if zero and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
