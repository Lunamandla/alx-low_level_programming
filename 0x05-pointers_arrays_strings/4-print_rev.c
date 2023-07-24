#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints numbers in reverse
 * @s - string to print
 *
 * Return: void
 */
void print_rev(char *str)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
