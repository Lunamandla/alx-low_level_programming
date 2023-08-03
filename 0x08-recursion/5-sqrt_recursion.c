#include <stdio.h>
#include "main.h"

/**
 * _sqrt - calculate square root
 * @n: numb34 to calculate the ^
 * @i: iterate number
 *
 * Return: int number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));

}

/**
  _sqrt - calculate square root
 * @n: numb34 to calculate the ^
 * @i: iterate number
 *
 * Return: natural ^2
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}