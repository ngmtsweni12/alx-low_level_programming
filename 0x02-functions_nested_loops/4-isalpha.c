#include "main.h"

/**
 * _isalpha - is the character an alphabet or not.
 * @c: An input character
 * Description: function uses _putchar function.
 * Return: 1 if is alphabet or 0 if is not.
 */

int _isalpha(int c)
{
	char i;
	int alpha = 0;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		alpha = 1;
	else
		alpha = 0

	return (alpha);
}
