#include <stdio.h>
/**
 * main - writes the character c to standard output
 * @c: The character to print
 *
 * Return: (Succuess) 1
 */
int _putchar(char c)
{
	return (fwrite(1, c, 1));
}
