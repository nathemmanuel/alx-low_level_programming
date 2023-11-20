#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Write a program that prints its name,
 * followed by a new line
 * @argc: A count of the arguments supplied during runtime\
 * @argv: A pointer to the array of strings
 *
 * Return: 0 (indicating success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
