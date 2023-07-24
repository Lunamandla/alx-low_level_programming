#include <stdio.h>

/**
 * _puts - Prints the strings
 * @str: String to print
 *
 * Return: void
 */

int _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
