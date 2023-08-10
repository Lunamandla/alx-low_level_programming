#include <stdio.h>
#include <stlib.h>
#include "main.h"

/**
 * malloc_checked  function that allocates memory using malloc
 * @b: allocated memory
 * Return: pointer to a allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if ( a == NULL)
		exit(98);
	return (a);
}
