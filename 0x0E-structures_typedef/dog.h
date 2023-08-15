#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

void init_dog(struct dog *my_dog, char *name, float age, char *owner)
{
	struct dog my_dog;

	if (my_dog == NULL)
		my_dog = malloc(sizeof(struct dog));

	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;

}
