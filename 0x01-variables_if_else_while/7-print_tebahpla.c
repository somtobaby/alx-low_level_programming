#include <stdio.h>

/**
 * main - the entry point of the program
 * description - Displays the alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char alphabet;
	
	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
