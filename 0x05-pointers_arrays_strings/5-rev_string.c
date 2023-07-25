#include "main.h"


/**
 * rev_string - Reverse the string
 * @s: string to reverse
 *
 * Return: String in reverse 
 */

void rev_string(char *s)
{
	int b, c, d;
	char *a, aux;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (d = 1; d < c; d++)
	{
		a++;
	}

	for (b = 0; b < (c / 2); b++)
	{
		aux = s[b];
		s[b] = *a;
		*a = aux;

		a--;
	}
}
