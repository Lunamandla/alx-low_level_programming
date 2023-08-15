#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>



/**
 * init_dog - initialize vairables
 * @d: initialize pointer
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner of tghe dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;

}
#endif
