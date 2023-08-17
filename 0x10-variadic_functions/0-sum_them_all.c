#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the allthe sum of its par
 * 
 */

int sum_them_all(const unsigned int n, ...)

int main()
{
	printf("Sum them all: %d\n", sum_them_all(20, 30, 40, 10);
			return (0);
}
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	va_start(list, n);
	int i, sum = 0;

	if (n == 0)
	
	return (0);

	for (i = 0; i <= n; i++)
	{
		sum += va_arg(list, int);
	}
	return (sum);
	va_end(list);
}
