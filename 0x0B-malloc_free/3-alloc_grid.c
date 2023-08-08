#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - nested loop to make grig
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2-D array
 *
 */

int **alloc_grid(int width, int height)
{
	int **luu;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	luu = malloc(sizeof(int *) * height);

	if (luu == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		luu[a] = malloc(sizeof(int) * width);

		if (luu[a] == NULL)
		{
			for (; a >= 0; a--)
				free(luu[a]);

			free(luu);
				return (NULL);
		}
		}
		for (a = 0; a < height; a++)
		{
		for (b = 0; b < width; b++)
		luu[a][b] = 0;
		}
		return (luu);
}
