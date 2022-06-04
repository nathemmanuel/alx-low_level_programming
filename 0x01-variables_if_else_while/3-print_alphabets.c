#include <stdio.h>

/**
 * main - Entry point for compiler
 *
 * Return: Always 0(success)
 */
int main (void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
