#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints Addition of two numbers
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0, sum = 0;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		printf("%d\n", argv[i]);
		sum += atoi(argv[i]);
		return (1);
	}
		printf("%d\n", sum);
	else
	{
		printf("Error\n");
	}
	return (0);

	}
}
