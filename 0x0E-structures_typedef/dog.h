/**
 * dog - defines the characteristics
 * of a dog
 * @name: Dog's name
 * @age: Its age
 * @owner: Its owner
 *
 * Description: Not much to say in addition
 */
#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
