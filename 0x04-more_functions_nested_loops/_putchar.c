#include <stdio.h>
/**
 * main - writes the character c to standard output
 * @c: The character to print
 * on error: -1 is returned and errno is send appropiatlely
 * Return: (Succuess) 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
