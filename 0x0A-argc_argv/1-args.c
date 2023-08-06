#include <stdio.h>

/**
 * main - prints number of arguments
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%d\n", argc - 1);
	return (0);
}
