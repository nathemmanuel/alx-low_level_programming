#include <unistd.h>
#include "main.h"

/**
 * times_table - prints the multiplication table from 0 to 9
 *
 * Return: No value (void)
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 9)
	{
		k = i  * j;
		if (i == 9)
		 {
			 write(1, &k, 3);
			// _putchar(i * j);
			_putchar('\n');
		 }
		for (j = 0; j <= 9; j++)
		{
			write(1, &k, 3);
			// _putchar(i * j + '0');
			_putchar(',');
		}
		_putchar('\n');
		i++;
	}
}
