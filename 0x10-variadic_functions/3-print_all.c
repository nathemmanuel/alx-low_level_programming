#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: A list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i;
	va_start(list, format);

	while (*(format + i) != '\0')
	{
		if (*(format + i) == "c")
			printf("%c", va_arg(list, char));
		else if (*(format + i) == "i")
			printf("%d", va_arg(list, int));
		else if (*(format + i) == "f")
			printf("%f", va_arg(list, float));
		else if (*(format + i) == "s")
		{
			if (*(format + i) == NULL)
				printf("(nil)");
			printf("%s", va_arg(list, char *));
		}
		i++;
	}
		printf("\n");
}
