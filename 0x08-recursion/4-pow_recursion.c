#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - returns the value of raised by a power value of y
 * @x: the value to multiply
 * @y: the time to multiply the value
 *
 * Return: in value
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);

	if (y <= 1)
		return (1);
	return (x *  _pow_recursion(x, y - 1));
}
