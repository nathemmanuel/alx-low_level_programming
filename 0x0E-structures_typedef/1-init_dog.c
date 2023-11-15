#include "dog.h"

/**
 * init_dog - initializes a variable of struct dog
 * Basically, it just assigns values to them.
 * @d: Pointer to struct of type dog
 * @name: Name of the dog
 * @age: Its age
 * @owner: Whose dog it is
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
