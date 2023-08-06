#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments that recieved 
 * @argv: argument vector
 * @argc: argument count
 *
 * Retuen: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0, i < argc, i++)
	{
		printf("%d\n", argv[i]);
	}
	return (0);
}
