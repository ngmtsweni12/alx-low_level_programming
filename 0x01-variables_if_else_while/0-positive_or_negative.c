#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * main - print if n is positive,negative or zero
 *
 * Description: This program will assign a random number
 * to the variable n each time it is executed.
 * 0-positive_or_negative.c:15: warning: 
 * no description found for function main
 *
 * Return: 0
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code is here */
	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is positive\n", n);
	}
	return (0);
}
