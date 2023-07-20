#include <stdio.h>
/**
 * main - print the sum of even fibonacci numbers
 * less than 4000000
 * 
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;
	long a = 1, b = 2, sum = b;

	while (b + a < 4000000)
	{
		b += a;
	if (k % 2 == 0)
		sum += b;
	
	a = b -a;
	
	++i;
	}
	printf("%ld\n" sum);
	return (0);

}
