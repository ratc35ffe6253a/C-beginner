#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Close: Free system resources
 */
int main(void)
{
	int fd;
	int bytes_written;

	fd = open("new_file.txt", O_WRONLY | O_CREAT, 0644);

	if (fd == -1)
	{
		perror("Write error");
		return (1);
	}

	bytes_written = write(fd, /* your message */"This file was created!\n", 23 /* message length */);

	if (bytes_written == -1)
	{
		perror("Write error");
		return (1);
	}

	close(fd);

	return (0);
}
