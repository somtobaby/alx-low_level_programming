#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - this is the starting point of the program
 * description - codeto check if a random number is pos, neg or zero
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
