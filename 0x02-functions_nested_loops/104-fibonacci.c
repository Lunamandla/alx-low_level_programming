#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be , and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int kr1 = 0, ak1 = 1, kr2 = 0, ak2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", ak1, ak2);
	for (count = 2; count < 98; count++)
	{
		if (ak1 + ak2 > LARGEST || kr2 > 0 || kr1 > 0)
		{
			hold1 = (ak1 + ak2) / LARGEST;
			hold2 = (ak1 + ak2) % LARGEST;
			hold3 = kr1 + kr2 + hold1;
			kr1 = kr2, kr2 = hold3;
			ak1 = ak2, ak2 = hold2;
			printf("%lu%010lu", kr2, ak2);
		}
		else
		{
			hold2 = bk1 + bk2;
			ak1 = ak2, ak2 = hold2;
			printf("%lu", ak2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
