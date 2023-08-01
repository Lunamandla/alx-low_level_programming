#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of 2 diagonals of square
 * 
 * @a: Matrix
 * @siz : Size 
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int y, sum1 = 0, sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 += a[(size + 1) * y];
		sum2 += a[(size + 1) * (y + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
