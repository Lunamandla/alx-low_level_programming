#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize variable  of struct dog
 * @p: the dog to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @ower: dog's owner's name
 */

void init_dog(struct dog *p, char *name, float age, char *owner)
{
	if (p != NULL)
	{
		p->name = name;
		p->age = age;
		p->owner = owner;
	}
}
