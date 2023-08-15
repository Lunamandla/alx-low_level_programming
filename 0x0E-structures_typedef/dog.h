#include "dog.h"
#include <stdlib.h>

void init_dog(struct dog *p, char *name, float age, char *owner)
{

	if (p == NULL)

		p = malloc(sizeof(struct dog));

	p->name = name;
	p->age = age;
	p->owner = owner;
	
	return (0);
}
