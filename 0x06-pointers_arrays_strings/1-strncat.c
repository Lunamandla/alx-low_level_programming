#include <stdio.h>
#include "main.h"

/**
 * _strncat - Concatenate 2 str
 * @dest: destination str
 * @src: source str
 * @n: number of concatenation
 *
 * Return: Pointer to the str dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, k = 0;
	while (dest[dlen])
	{
		dlen++;
	}

	while (k < n && src[k])
	{
		dest[dlen] = src[k];
		dlen++;
		k++;
	}
	dest[dlen + n + 1] = '\0';
	return (dest);
}
