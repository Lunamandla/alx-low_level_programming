#include <stdio.h>

struct dog
{
	char *name;
	char *owner;
	int age;
};

int main(void)
{
	struct dog my_dog;
	
	my_dog.name = "Poppy";
	my_dog.owner = "Bob";
	my_dog.age = "3.4";

	printf("My name is %s, and I am %f", my_dog.name, my_dog.age);

	return (0);
}
