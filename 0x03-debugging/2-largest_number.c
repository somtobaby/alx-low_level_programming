#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int main(void)
{
	int largest;
	int a = 972;
	int b = -98;
	int c = 0;

	if (a > b && a > c)
	{
		largest = a;
		printf("%d is the largest number\n", a);
	}

	else if (b > a && b > c)
	{
		largest = b;
		printf("%d is the largest number\n", b);
	}

	else
	{
		largest = c;
		printf("%d is the largest number\n", c);
	}

	return (largest);
}
