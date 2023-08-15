#include <stdio.h>

struct dog
{
	char *name;
	char *owner;
	int age;
};

int main(void)
{
	struct dog dog;

	dog.name = "Poppy";
	dog.owner = "Bob";
	dog.age = "3.4";

	printf("My name is %s, and I am %f", dog.name, dog.age);

	return (0);
}
