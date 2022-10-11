#include "main.h"

/* this is supposed to be a different way to print the name of the file as in 2-main.c */

/**
 * different - prints the name of the file
 * @str: Accepts the string
 *
 * Return: Nothing (it's just printing)
 */

void different(char *str)
{
	int i = 0;
	
	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * main - checks your code
 *
 * Return: 0(success)
 */

int main(void)
{
	char *str;

	str = __FILE__;
	different(str);
	return (0);
}
