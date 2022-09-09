#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0(success)
*/

int main(void)
{
	char c;
	c = 122;

	while (c >= 97)
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
