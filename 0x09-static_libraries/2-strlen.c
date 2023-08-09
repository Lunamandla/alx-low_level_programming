#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the string to be counted
 *
 * Return: String length
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
