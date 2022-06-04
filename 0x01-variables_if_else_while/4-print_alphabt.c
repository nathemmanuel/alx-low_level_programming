#include <stdio.h>

/**
 * main - Entry point for compiler
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			c++;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
