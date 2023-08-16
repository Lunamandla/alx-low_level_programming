#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - return index place if comparison = true, else -1
 * @size: size of an array
 * @cmp: pointer that points a function of one of the 3 main
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp = NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);	
}
