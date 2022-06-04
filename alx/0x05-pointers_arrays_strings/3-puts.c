#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string followed by a newline.
 * @str: The string to be printed out
 *
 * Return: Nothing (void)
 */
void _puts(char *str)
{
	int i;

	/*
	 * str is an array; str points to the address of the first element str[0]
	 * *(str + 1) == str[1] it gives you the first character
	 * We can loop until we get to \0, then you print \n
	 */
	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar (*(str + i));
		i++;
	}
	_putchar('\n');
}
