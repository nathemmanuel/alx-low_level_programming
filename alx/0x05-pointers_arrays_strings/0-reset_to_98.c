#include "main.h"
/**
 * reset_to_98 - updates the value passed into the argument to 98
 * @n: holds the address of the variable being pointed to.
 *
 * Return: Nothing(void)
 */
void reset_to_98(int *n) // this receives &n
{
	*n = 98;
}
