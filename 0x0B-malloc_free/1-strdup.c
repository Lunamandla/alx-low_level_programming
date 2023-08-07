#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return a pointer to a allocated space in memory, whic contains a copy of a string.
 * @str: the string to be allocated
 *
 * Return: str
 */

char *_strdup(char *str)
{
	int z = 0, i = 1;
	char *a;

	if (str == NULL)
	return (NULL);
	
	while (str[i])
	{
		i++;
	}

	a = malloc((sizeof(char) * i) + 1);

	if (a == NULL)
		return (NULL);
	while (z < i)
	
		a[z] = str[z];
	x++;
}
	a[z] = '\0';
	return (a);

}
