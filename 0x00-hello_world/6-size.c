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
	printf("Size of a char: %d byte(s)\n", sizeof(char c));
	printf("Size of a int: %d byte(s)\n", sizeof(int i));
	printf("Size of a long int: %d byte(s)\n", sizeof(long li));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long lli));
	printf("Size of a float: %d byte(s)\n", sizeof(float f));
	return (0);
}
 
