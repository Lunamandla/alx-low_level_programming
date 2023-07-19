#include "main.h"
/**
 * main - code that prints the sign of a number
 *
 * Return: 1 and print + if is greater than and 0 if is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
