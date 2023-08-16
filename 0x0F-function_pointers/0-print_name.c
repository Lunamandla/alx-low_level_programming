#include <stdio.h>
#include  <stdlib.h>
#include "function_pointers.h"

/** print_name - function that prints name
 * @name: name of the user
 * return: nothing
 */

void print_name(char *name, void (*f)(char *));
{
	char n;

	if (n==NULL)
		return (NULL);
	printf("%s\n", name);
}
