#include "main.h"
/**
 * main - print alphabets te times the alphabet
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
	
		a++;
	}
}
