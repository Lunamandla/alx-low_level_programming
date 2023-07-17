#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - programme that prints alphabets in lower cases
 *
 * Return: Always (Success)
 */
int main(void)
{
	char ch = 'a';
	printf("Lowercase alphabet :\n" );
	while (ch <= 'z')
	{
	printf("%c ", ch);
	ch++;
	}
	printf("\n");
	return (0);
}
