#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char c, d;

	c = 97;
	d = 65;
	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	while (d <= 90)
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
