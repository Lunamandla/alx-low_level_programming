#include "main.h"
/**
 * _isdigit - checks if is the digit
 * @x: is the number to chk
 *
 * Return: 1 for char that is digit and 0 for anything else
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
