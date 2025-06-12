#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit % 2 != 0)
	{
		printf("Last digit of %d is %d and it is odd\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and it is even\n", n, last_digit);
	}

	return (0);
}
