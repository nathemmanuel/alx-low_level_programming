#include <unistd.h>
#include "main.h"

/**
 * print_chessboard - prints the characters in the array
 * @a: The 8*8 array to be printed
 *
 * Return: Nothing(void)
 */
void print_chessboard(char (*a)[8])
{
	int i;

	i = 0;
	while (*(((a) + i)+ i) != '\0')
	{
		_putchar(*(((a) + i)) + i);
		i++;
	}
}
