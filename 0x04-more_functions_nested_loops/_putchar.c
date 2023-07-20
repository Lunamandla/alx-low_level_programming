#include <stdio.h>
/**
 * main - writes the character c to
 *
 * Return: (Succuess) 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
