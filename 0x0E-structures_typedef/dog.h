#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

struct dog
{
	char *name;
	float age;
	char *owner;
};

int main(void)
{
	struct dog my_dog;

	if (my_dog == NULL)
		my_dog = malloc(sizeof(struct dog));

	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;

}
#endif
