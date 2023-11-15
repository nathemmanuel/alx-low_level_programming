#include "dog.h"

/**
 * d - Pointer to dog struct
 *
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");
	if (d->name == NULL || d->age == NULL
			|| d->owner == NULL)
	{
		printf("nil");

}
