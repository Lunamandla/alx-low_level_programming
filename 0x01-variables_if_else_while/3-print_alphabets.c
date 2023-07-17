#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  programme that prints alphabets lowercase and uppercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	printf("%c", a);
	
	for (a = 'A'; a <= 'Z'; a++)
	printf("%c", a);

	return (0);
}
