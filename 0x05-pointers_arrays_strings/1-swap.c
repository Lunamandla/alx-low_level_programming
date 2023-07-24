#include <stdio.h>

/**
 * swap_int - swap the two int
 *
 * @a: an int to swap
 * @b: another int to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
