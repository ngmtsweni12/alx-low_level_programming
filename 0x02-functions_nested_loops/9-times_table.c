#include <stdio.h>
#include "main.h"

/**
 * times_table - print multiplication table
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: void
 */

void times_table(void)
{
	int c;
	int r;
	
	for (c = 0; c < 10; c++)
	{
		for (r = 0; r < 10; r++)
		{
			_putchar(c * r);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
