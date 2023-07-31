#include "main.h"
#include <stdio.h>

/** _memset - Code to fill memory with a constant byte
 * @s: memory constant to fil
 * @b: constant byte to fill
 * @n: byte of memory to fill
 *
 * Return: the memory area filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
