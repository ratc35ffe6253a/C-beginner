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
	int r;

	srand(time(0));  /* Use this as-is */
	r = rand() % 101 - 50;  /* Generates numbers from -50 to +50 */

	if (r > 0)
	{
		printf("%d is positive\n", r);
	}
	else if (r == 0)
	{
		printf("%d is zero\n", r);
	}
	else
	{
		printf("%d is negative\n", r);
	}

	return (0);
}

