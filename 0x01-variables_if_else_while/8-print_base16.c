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

	for (number = '0'; number <= '16'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
