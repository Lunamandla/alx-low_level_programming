#include "main.h"

/**
 * print_diagonal - code that draw diagonal line  according parameters
 *
 * @n: The number of line to print diagonal line
 *
 * Return: empty
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(32);
			}
			_putcahar(92);
			_putchar('\n')
		}
	}

}
