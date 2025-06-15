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
	n = rand() % 2001 - 1000;
	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	printf("Last digit of %d is %d and ", n, last_digit);

	if (last_digit == 2 || last_digit == 3 || last_digit == 5 || last_digit == 7)
	{
		printf("it is a single-digit prime number\n");
	}
	else if (last_digit == 0)
	{
		printf("it is zero\n");
	}
	else
	{
		printf("it is not a prime\n");
	}

	return (0);
}

