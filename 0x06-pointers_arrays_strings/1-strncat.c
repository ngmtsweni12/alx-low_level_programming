#include "main.h"

/*
 * _strncat - a function that concatenates two strings
 * @dest: given parameter
 * @src: given parameter
 * @n: given parameter
 * Return: con string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (temp);
}
