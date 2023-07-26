#include <stdio.h>
#include "main.h"

/**
 * _strcat - Concatenate 2 strings
 * @dest: destination string
 * @src: Source strin
 *
 * Return: A ponter to a string destination
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
