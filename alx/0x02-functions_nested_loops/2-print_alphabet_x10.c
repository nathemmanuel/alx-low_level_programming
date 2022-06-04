#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the entire alphabet in lowercase 10 times over.
 *
 * Return: Nothing(void)
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
