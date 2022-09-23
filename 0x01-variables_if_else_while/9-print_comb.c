#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints the alphabet in lowercase,
 * followed by a new line
 * Return: 0
 */


int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number == 9)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
