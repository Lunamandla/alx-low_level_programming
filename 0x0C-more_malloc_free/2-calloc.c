#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _memset - fill memory with the constant byte.
 * @s: memory to be filled
 * @b: char to copied
 * @n: number of times to copy the char
 *
 * Return: pointer to the memo area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i < 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}

/**
 * _calloc - function that alloates memo of an arry using malloc
 * @nmemb: number of elements in arr
 * @size: size of each element
 *
 * Return: a pointer to allo memo
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)

		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
