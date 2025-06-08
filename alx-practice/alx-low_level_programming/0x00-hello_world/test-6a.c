#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1 (success)
 */
int main(void)
{
	write(2, "Error: Something went wrong\n", 28);
	return (1);
}

