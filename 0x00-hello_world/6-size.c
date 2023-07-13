#include<stdio.h>
/**
 * main - Program that prints the size of the various types on the computer
 * Return: 0(Success)
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	double doubleType;
	//Evaluating size of variable
	printf("Size of int: %zu bytes\n", sizeof intType));
	printf("Size of float: %zu bytes\n", sizeof floatType));
	printf("Size of char: %zu bytes\n", sizeof charType));
	printf("Size of double: %zu bytes\n", sizeof doubleType));
	return (0);
}
