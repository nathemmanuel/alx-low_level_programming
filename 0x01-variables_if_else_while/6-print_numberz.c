#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0(success)
*/

int main(void)
{
	int c;

	c = 48;
	while (c < 58)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
