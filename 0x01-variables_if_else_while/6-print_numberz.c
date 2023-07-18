#include <stdlib.h>
#include <time>
#include <stdio.h>
/**
 * main - programme that prints all single numbers of base ten
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	int a;

	while (a < 10)
	{
	putchar(a + '0');
	if (a  < 9)
	putchar(' ')

	}
	a++;
	putchar("\n")
	return (0);
}

