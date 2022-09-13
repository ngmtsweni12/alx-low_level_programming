#include "main.h"

/**
 * main - print alphabets in lowercase
 *
 * print_alphabet -> a function that prints the alphabet,
 * in lowercase, followed by a new line
 *
 * Description: a function that prints the alphabet,
 * in lowercase, followed by a new line 
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
