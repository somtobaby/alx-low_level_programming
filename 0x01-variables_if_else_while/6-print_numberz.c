#include <stdio.h>

/**
 * main - this is the entry point of the program
 * description - code to find the digits in base ten
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar ('\n');
	return (0);
}
