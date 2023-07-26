#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes small letter to Capital letters
 * @p: a string to mod
 *
 * Return: char var
 */

char *string_toupper(char *p)
{
	int c = 0;

	while (p[c])
	{
		if (p[c] >= 97 && p[c] <= 122)
		{
			p[c] -= 32;
		}
		c++;
	}
	return (p);
}
