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
		n *= -1;
	return (n % 10);
}
