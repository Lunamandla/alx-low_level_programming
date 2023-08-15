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

	dog.name = " ";
	dog.owner = " ";
	dog.age = " ";

	return (0);
}
