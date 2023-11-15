#include "main.h"

/**
 * _puts_recursion - prints a string recursively,
 * followed by a new line
 * @s: The string it prints recursively
 *
 * Return: Void
 */

void _puts_recursion(char *s)
{
	/* int n;
	 * 
	 * n = 0;
	 *
	 * Instead of adding n which is a move used to keep a loop
	 * going, I can just add 1 because it adds 1 every time
	 * (kinda like ++ for a loop)
	 */

	/* if (*(s + n) == '\0')  
	 * I was referring to the string with this bit of code, not the pointer
	 * which was the argument required
	 */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion((s + 1));
}
