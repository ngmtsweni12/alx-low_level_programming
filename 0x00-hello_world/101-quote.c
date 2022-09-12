#include <stdio.h>
#include <stdlib.h>

/**
 * main - print without the use of printf
 *
 * Description: a C program that prints exactly
 * and that piece of art is useful
 * - Dora Korpar, 2015-10-19, 
 * followed by a new line, to the standard error.
 *
 * Return: 1
 *
 */

int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful\"
			- Dora Korpar, 2015-10-19\n");
	return (1);
}
