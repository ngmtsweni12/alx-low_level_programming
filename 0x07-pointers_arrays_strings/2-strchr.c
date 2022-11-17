#include "main.h"

/**
* _strchr -> string character
* @s: string given
* @c: another char
* Return: a string
*/

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
