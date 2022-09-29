#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: holds the address of the array
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int a, l, n;
// a is the one we use to print, l is the string length and n is the index of the last array  element
	l = 0;
	puts("Variable assignment");
	while (*(str + l) != '\0')
	{
		l++; /* string length */
//		puts("Checks string length");
	}
	printf("%d", l);
	n = l - 1;
	if (l % 2 == 0) /* Even test */
	{
		puts("Checks for evenness");
		for (a = l/2 ; (a >= (l / 2) && a <= n); a++) /* 9/2 is 4 and l-1 is 8 */{
			_putchar(*(str + a));
			// puts("Checks through the string");
		}
	}
	else
		for (a = l/2; (a >= n / 2) && (a <= n); a++)
		{
			_putchar(*(str + a));
		//	puts("Checks through the string");
		}
	_putchar('\n');
}
