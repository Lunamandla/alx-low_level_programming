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
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
	return (NULL);
	
	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);
	while (a < i)
	
		s[a] = str[a];
	a++;
}
	s[a] = '\0';
	return (s);

}
