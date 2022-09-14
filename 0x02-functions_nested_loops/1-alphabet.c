#include  <stdio.h>

/**
 * print_alphabet - Entry Point
 * description - code to print the alphabet in lowercase
 * using putchar
 * Return: 0
 */

int main(void)
{
void print_alphabet(void);

	char ch = 'a';
	char i = '\n';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar(i);
	return (0);
}
