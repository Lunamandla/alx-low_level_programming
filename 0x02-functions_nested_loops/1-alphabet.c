#include "main.h"
/**
 *
 * main - programme that print_alphabets in lower cases
 *
 * Return: Always 0(Success)
*/

void print_alphabet(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
		putchar(e);
	}
		
	putchar('\n');
}
