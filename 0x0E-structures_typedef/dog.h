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

	return (0);
}
