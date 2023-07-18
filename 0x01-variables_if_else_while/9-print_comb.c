#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints all single number in ascending order
 *
 * Return: Always (Success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);

	if (a != '9')
	{
		putchar(',');
		putchar(' ');

	}
}
	putchar('\n');

	return (0);
}
