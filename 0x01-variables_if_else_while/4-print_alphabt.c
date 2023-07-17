#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - programme that prints all alphabets accept e & q
 *
 * Return: Always (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
		printf(i);
		
		}
	}
	printf('\n');

	return (0);

}
