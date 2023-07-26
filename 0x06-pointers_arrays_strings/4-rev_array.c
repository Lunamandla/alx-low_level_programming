#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Reverse the content of an arr of an int
 * @a: an integers array
 * @n: number of elements to swap
 *
 * Return: empty
 */

void reverse_array(int *a, int n)
{
	int *p, i, aux, j;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}
	for (j = 0; j < i / 2; j++)
	{

		aux = a[j];
		a[j] = *p;
		*p = aux;

		p--;
	}

}
