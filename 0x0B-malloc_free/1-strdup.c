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
	int x = 0, i = 1;
	char *a;

	if (str == NULL)
	return (NULL);
	
	while (str[i])
	{
		i++
	}

	a = malloc((sizeof(char) * i) + 1);

	if (a == NULL)
		return (NULL);
	while (x < i)
	{
		a[x} = str[x];
	x++
}
	a[x] = '\0';
	return (a);

}
