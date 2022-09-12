#include <stdio.h>

/*
 * main - prints all the prints the size of various types on the computer it is compiled and run on.
 *
 * Description: C program that prints the size of various types on the computer it is compiled and run on
 *
 * Return: 0
 *
 */

int main(void)
{
	/* Declarations. */
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of a int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(li));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lli));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
 
