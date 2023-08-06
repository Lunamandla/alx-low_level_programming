#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * main - Prints the sum of args positive numbers
  * @argv: argument vector
  * @argc: argument count
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int i;
	unsigned int s, sum = 0;
	char *a;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
		a = argv[i];

		for (s = 0; k < strlen(a); s++)
		{
		if (a[s] < 48 || a[s] > 57)
		{
		printf("Error\n");
		return (1);
			}
	}
		
			sum += atoi(a);
			a++;
	}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
