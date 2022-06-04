#include <unistd.h>
#include "main.h"

/**
 * print_sign - prints a sign depending on the argument
 * @n: The input we check in order to determine the output sign
 *
 * Return: 1 if n is zero, 1 if n > 0 and -1 if n <0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		char c = _putchar('+');
		write(1, &c, 1);
		return (1);
	}
	else if (n == 0)
	{
		char d = _putchar('0');
		write(1, &d, 1);
		return (0);
	}
	else
	{
		char h = _putchar('-');
		write(1, &h, 1);
		return (-1);
	}
}
int main(void)
{
	_putchar(print_sign(2));
	_putchar(print_sign(-3));
	return (0);
}
