#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m = 23;

	if (m > 0) {
		printf("%d is positive\n", m);
	}

	if (m == 0) {
		printf("%d is zero\n", m);
	}

	if (m < 0) {
		printf("%d is negative\n", m);
	}

	return (0);
}
