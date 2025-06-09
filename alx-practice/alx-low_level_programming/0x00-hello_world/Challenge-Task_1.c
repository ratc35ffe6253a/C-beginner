#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fd;
	ssize_t bytes_written;

	fd = open("log.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);

	if (fd < 0)
	{
		perror("Write error");
		return (1);
	}

	bytes_written = write(fd, "\"New session started\"\n", 23);

	if (bytes_written == -1)
	{
		perror("Write error");
		return (1);
	}

	close(fd);

	return (0);
}
