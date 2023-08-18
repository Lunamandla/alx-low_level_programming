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

int main(void)
{
	printf("Sum them all: %d\n", sum_them_all(20, 30, 40, 10));
			return (0);
}
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	va_start(list, n);
	int i, sum = 0;
	const unsigned int n;

	if (n == 0)
	
	return (0);

	for (i = 0; i <= n; i++)
	{
		sum += va_arg(list, int);
	}
	return sum;
	va_end(list);
}
