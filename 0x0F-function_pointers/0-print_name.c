#include <stdio.h>
#include  <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: name of the user
 * @f: pointer to func
 * return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name  == NULL || f == NULL)
		return;
	f(name);
}
