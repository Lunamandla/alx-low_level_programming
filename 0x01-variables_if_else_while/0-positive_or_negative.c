#include<stdio.h>
/**
 * main - programe that read positve and nagative numbers
 */
int main(void)
{
	int n;
	/*if statement*/
	if (n > 0)
		printf("%d is positive\n");
	else if (n == 0)
		printf("%d is zero\n");
	else (n < 0)
		printf("%d is negative\n");
	return (0);
}
