#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * main - return the allthe sum of its par
 * @n: const variable
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int sum = 0;
	unsigned int i;

	va_start(args, n);
	
	if (n == 0)
	
	return (0);

	for (i = 0; i <= n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return sum;
}
