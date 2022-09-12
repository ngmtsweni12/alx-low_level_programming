#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * main - mainy
 *
 * Desciption: yes
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
	else if (n > 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is positive\n", n);
	}

	return (0);
}
