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
	n = rand() % 201 - 100;
	last_digit = n % 10;

	printf("Last digit of %d is %d and ", n, last_digit);

	if (last_digit % 2 == 0 && last_digit > 0)
	{
		printf("is Even and positive\n");
	}
	else if (last_digit == 0)
	{
		printf("is Even and zero\n");
	}
	else if (last_digit % 2 == 0 && last_digit < 0)
	{
		printf("is Even and negative\n");
	}
	else if (last_digit % 2 != 0 && last_digit > 0)
	{
		printf("is Odd and positive\n");
	}
	else if (last_digit % 2 != 0 && last_digit < 0)
	{
		printf("is Odd and negative\n");
	}
	else
	{
		printf("Unhandled case\n");
	}

	return (0);
}
