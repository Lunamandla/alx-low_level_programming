#include <stdlib.h>
#include "dog.h"

void init_dog(struct dog *p, char *name, float age, char *owner)
{
	if (p != NULL)
	{
		p->name = name;
		p->age = age;
		p->owner = owner;
	}
}
