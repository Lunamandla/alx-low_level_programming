#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - programme that prints alphabets on reverse
 *
 * Return: Always (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

