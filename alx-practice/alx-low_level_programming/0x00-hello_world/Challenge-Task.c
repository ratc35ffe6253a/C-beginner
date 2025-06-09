#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - Entry point
 *
 * O_RDONLY: opens sample.text
 * read: shall attempt to read nbyte bytes from the file associated with the open file descriptor
 * write: function shall attempt to write nbyte bytes from the buffer pointed to by buf to the file associated with the open file descriptor
 * close: function shall deallocate the file descriptor indicated
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fd;
	ssize_t bytes_read;
	char buffer[1024];

	/* Step 1: Open the file */
	fd = open("sample.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (1);
	}

	/* Step 2: Read and write in a loop */
	while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		if (write(STDOUT_FILENO, buffer, bytes_read) == -1)
		{
			perror("Error writing to stdout");
			close(fd);
			return (1);
		}
	}

	if (bytes_read == -1)
		perror("Error reading from file");

	/* Step 3: Close the file */
	if (close(fd) == -1)
	{
		perror("Error closing file");
		return (1);
	}

	return (0);
}
