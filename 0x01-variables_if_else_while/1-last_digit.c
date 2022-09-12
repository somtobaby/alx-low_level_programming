#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the entry point of the program
 * description - code which prints last digit of ran num
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (c > 5)
	{
		printf("Last digit of %d is c and is greater than 5", n);
	}
	else if (c == 0)
	{
		printf("Last digit of %d is c and is 0", n);
	}
	else if (6 > (c != 0))
	{
		printf("Last digit of %d is c and is less than 6 and not 0", n);
	}

	return (0);
}
