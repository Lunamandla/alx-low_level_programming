#include "main.h"

/**
 * print_line - function that draw fisrt line according to parmeters
 *@n: The number of lines 
 *
 * Retrn: Empty
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
		for (a = 0; a < n; a++)

		{	
			_putchar(95);
		}
	_putchar('\n');

}
