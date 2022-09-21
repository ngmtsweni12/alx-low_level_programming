#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: given string
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char reverse;

	while (s[len] != '\0')
		len++;
	
	while (i < len--)
	{
		reverse = s[i];
		s[i++] = s[len];
		s[len] = reverse;
	}
}
