#include <stdio.h>
#include "main.h"

/**
 * print_numbers - a function that prints the numbers,
 * from 0 to 9 using ASCII numbers.
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
