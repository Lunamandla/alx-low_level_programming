#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strngs - Prints strings, followed by a new line
 * @separator: str to be printed btwn the str
 * @n: number of strings 
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int a;
	char *str;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(args, char*);
		
		if (str)
			printf("%s", str);
		else
			printf('(nil)');

		if (a < n -1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(args);
		
		
}
