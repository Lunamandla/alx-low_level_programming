#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string followed by new line
 * @s: the string to print 
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
