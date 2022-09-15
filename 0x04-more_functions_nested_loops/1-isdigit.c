#include <stdio.h>
#include "main.h"

/**
 * _isdigit - A function that checks for a digit using ASCII numbers.
 * @c: A parameter
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
