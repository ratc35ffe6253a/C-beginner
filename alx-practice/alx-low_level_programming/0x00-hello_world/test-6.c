#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1 (success)
 */
int main(void)
{
	int n = write(-1, "Good evening\n", 13);
	if (n == -1)
	{
		perror("Write error");
	}

	return (1);
}
