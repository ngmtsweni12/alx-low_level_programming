#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * @str: given string
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int i;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for (i = n; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
