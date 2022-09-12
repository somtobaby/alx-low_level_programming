#include <stdio.h>

/**
 * main - this is the starting point of the program
 * description - program that prints the size of various types
 * Return: 0
 */

int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of char: %ld byte(s)\n", sizeof(charType));
	printf("Size of int: %ld byte(s)\n", sizeof(intType));
	printf("Size of long int: %ld byte(s)\n", sizeof(longintType));
	printf("Size of long long int: %ld byte(s)\n", sizeof(longlongintType));
	printf("Size of float: %ld byte(s)\n\n", sizeof(floatType));

	return (0);
}
