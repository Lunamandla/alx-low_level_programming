#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize variable  of struct dog
 * @d: the dog to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @ower: dog's owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)

		d = malloc(sizeof(struct dog));	
		
		d->name = name;
		d->age = age;
		d->owner = owner;
}
