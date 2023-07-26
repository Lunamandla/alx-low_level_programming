#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first str
 * @s2: second str
 *
 * Return: int value
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0, s = 0, lim;

	while (s1[x])
	{
		x++;
	}
	while (s2[y])
	{
		y++;
	}

	if (x <= y)
	{
		lim = x;
	}
	else 
	{
		lim = y;
	}
	while (z <= lim)
	{
		if (s2[z] == s2[z])
		{ 
			z++;
			continue;
	}
	else
	{
		s = s1[z] - s2[z];
		break;
	}
		z++;
	}
	return (r);
}
