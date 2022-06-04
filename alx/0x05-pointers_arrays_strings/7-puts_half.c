#include <unistd.h>
#include "main.h"

/**
 * puts_half - prints half the string
 * @str: The character array to be looped through
 *
 * Return: Nothing(void)
 */
void puts_half(char *str)
{
	int i;
	int k;

	i = 0;
	while (*str != '\0')
	{
		i++;
	}
	i -= 1;
	/*
	 * Now, I have gotten the length of string, i
	 * and decrememnted it by 1 to give the last element of the array
	 */
		for (k = (i / 2); k <= i; k++)
		{
			_putchar(str[k]);
		}
	_putchar('\n');
}
