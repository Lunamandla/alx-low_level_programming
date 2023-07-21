#include "main.h"

/**
 * prin_most_numbers - print numbers from 0 to 9
 * 
 * Description: print the number excluding 2 and 4
 *
 * Return: the numbers from 0 t 9
 */
void print_most_numbers(void)
{
	int a = 0;

	for (; a <= 9, a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		else
		{
			_putchar(a + '0');
		}
		_putchar('\n')
}
