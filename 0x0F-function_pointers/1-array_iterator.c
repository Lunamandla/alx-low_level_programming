#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function given as para on each elem of an array
 * @array: array
 * @size: how many element to print
 * @action: pointer to print hex
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
