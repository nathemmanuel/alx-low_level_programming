#include <unistd.h>
#include "main.h"

/**
 * puts2 - prints every even character of a string followed by newline
 * @str: The string(character array) to be looped through
 *
 * Return: Nothing(void)
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
