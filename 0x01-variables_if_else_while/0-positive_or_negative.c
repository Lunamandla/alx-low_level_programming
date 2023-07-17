#include<stdlib.h>
#include<time>
#include<stdio.h>
/**
 *main - programme that prints positive or  negative  numbers
 *Return: 0 (Success)
 */
int main(void)
{
	/* local variable definition*/
	int n;
	/*Check the condition*/
      
      srand(time(0));
      n = rand() - RAND_MAX / 2;
	if (n > 0)
	       /*if the statement is true the print the ff*/
	       prinf("%d is positive\n",n);
	else if (n == 0)
		/*else if print the ff*/
		printf("%d is zero\n", n);
	else (n < 0)
		printf("%d is negative\n", n);
	return (0);
       
}
