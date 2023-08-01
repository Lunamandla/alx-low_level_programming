#include <stdio.>
#include "main"

/**
 * set_string - Sets the value of the pointer to char
 * @s: set value to modify
 * @to: set value to assign
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
