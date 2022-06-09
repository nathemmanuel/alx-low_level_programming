#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the numbers from the argument passed to 98
 * @n: The number to start from
 *
 * Return: Void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n > 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n--;
		}
	}
	else if (n <= 98)
	{
		while (n <= 98)
		{
			if (n < 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n++;
		}
	}
	printf("\n");
}
