#include<stdio.h>
/**
 * main - Program that prints the size of the various types on the computer
 * Return: 0(Success)
 */
int main(void)
{
	char a;
	int b;
	long-int c;
	long long int d;
	float f;

	//Evaluating size of variable
	
	printf("Size of char: %lu bytes(s)\n",(unsigned long)sizeof(a));
	printf("Size of int: %lu bytes(s)\n",(unsigned long)sizeof (b));
	printf("Size of long int: %lu bytes(s)\n",(unsigned long)sizeof(c));
	printf("Size of long long int: %lu bytes(s)\n",(unsigned long)sizeof(d));
	printf("Size of float: %lu bytes(s)\n",(unsigned long)sizeof(f));
	return 0;
}
