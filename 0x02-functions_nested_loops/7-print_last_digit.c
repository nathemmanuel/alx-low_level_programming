#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number
 *
 * Return: The value of the last digit
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
