#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: The number of arguments
 * @argv: A pointer to an array of strings
 *
 * Return: 0(if successful)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", *argv++);
		i++;
	}
	return (0);
}
