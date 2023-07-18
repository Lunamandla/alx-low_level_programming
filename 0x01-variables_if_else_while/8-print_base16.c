#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main- program that prints all the numbers of base sixteen
 *
 *  Reurn: Always (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n < '9'; n++)
	{
		putchar(n);
	}
	for (n = 'a'; n >= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}

