#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize vairables
 * struct dog - A new type describing a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner of tghe dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
#endif
