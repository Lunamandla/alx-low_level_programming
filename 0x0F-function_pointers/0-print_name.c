#include <stdio.h>
#include  <stdlib.h>
#include "function_pointers.h"

/** print_name - function that prints name
 * @name: name of the user
 * return: nothing
 */

void print_name(char *name, void (*f)(char *));
{
	char name;
	
	printf("Enter your name");
	scanf("%s\n", &name);
	printf("My name is: %s\n", name);
	return (0);
}
