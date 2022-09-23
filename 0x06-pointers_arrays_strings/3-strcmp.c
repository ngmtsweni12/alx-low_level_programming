#include "main.h"

/**
 * _strcmp - Task 3. A function that compares two strings.
 * @s1: string parameter
 * @s2: string parameter
 * Return: The difference s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
