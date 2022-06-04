#include <stdio.h>
#include "main.h"

/**
 * print_Fizz_Buzz - prints the numbers 1 - 100, but replaces every multiple of 3 with "Fizz"; every multiple of 5 with "Buzz" and every multiple of 15 with "FizzBuzz".
 *
 * Return: No value (void).
 */
void print_Fizz_Buzz(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n == 0)
			printf("%d ", n);
		else
		{
			if ((n % 3) == 0)
				printf("Fizz ");
			else if ((n % 5) == 0)
				printf("Buzz ");
			else if ((n % 15) == 0)
				printf("FizzBuzz ");
			else
				printf("%d ", n);
		}
	}
	printf("\n");
}
