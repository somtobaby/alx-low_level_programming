#include <stdio.h>
#include <time.h>

/**
 * main - the entry point of the program
 * description - codeto check if a random number is pos, neg or zero
 * Returm: 0
 */

int main(void)
{
	int n;

	if (n > 0)
	{
		printf("int %d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("int%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	
	return (0);
}
