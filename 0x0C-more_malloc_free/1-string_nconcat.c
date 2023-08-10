#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_concat - function that concatenates two str
 * @s1: first character
 * @s2: second character
 * @n: unsigned int
 *
 * Return: if the function fail must return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned a, b, c;

	char *p;
	
	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a]; a++)
			;
	}
	if (s2 == NULL)
	{
		b = 0;
	}
	else
	{
		for (b = 0; s2[b]; b++)
			;
	}
	if (b < n)
	b = n;
	p = malloc(sizeof(char) * (a + b + 1));

	if (p == NULL)

		return (NULL);

	for (c = 0; c < a; c++)

		p[c] = s1[c];

	for (c = 0; c < b; c++)

			p[c + a] = s2[c];
			p[a + b] = '\0';

		return (p);
}
