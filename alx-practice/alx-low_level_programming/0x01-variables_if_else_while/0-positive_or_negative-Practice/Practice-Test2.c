#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 2;

	if (x > -10 && x < 10) {
		printf("%d is between -10 and 10\n", x);
	} else if (x < -10) {
		printf("%d is less than -10\n", x);
	} else if (x > 10) {
		printf("%d is greater than 10\n", x);
	}

	return (0);
}
