#include  <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry Point
 * description - code to print the alphabet in lowercase
 * using putchar
 * Return: 0
 */

void print_alphabet();
int main(void)
{

	char ch = 'a';
	char i = '\n';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar(i);
}
