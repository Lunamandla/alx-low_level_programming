#include "main.h"
/**
 * main - print_alphabets_x10 - Make alphabets x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a;
	int b = 0;

	while (b <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
		_putchar('\n');

		b++;
	}
}
