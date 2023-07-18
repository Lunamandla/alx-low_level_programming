#include <stdio.h>
/**
 *
 * main - programme tha prints alphabets in lower cases
 *
 * Return: void
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

