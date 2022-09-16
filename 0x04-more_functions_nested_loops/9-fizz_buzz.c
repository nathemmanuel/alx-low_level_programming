#include <stdio.h>
#include "main.h"

/**
 * main - Prints Fizz for multiples of 3
 * and Buzz for multiples of 5, for 15: prints FizzBuzz
 *
 * Return: 0 (success)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else
			printf("%d ", a);
	}
	printf("\n");
}

