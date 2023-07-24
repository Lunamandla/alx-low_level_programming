#include <stdio.h>

/**
 * _strlen - Function that returns the lengthof a str
 * @s: the string to be counted
 *
 * return: String length
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
