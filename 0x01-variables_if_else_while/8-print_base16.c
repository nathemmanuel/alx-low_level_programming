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

	d = 97;
	c = 48;

	while (c < 58)
	{
		putchar(c);
		c++;
	}
	while (d <= 102)
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
