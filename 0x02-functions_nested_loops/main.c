#include "main.h"
/**
 * main - Entry Point
 * description: code to print alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}
