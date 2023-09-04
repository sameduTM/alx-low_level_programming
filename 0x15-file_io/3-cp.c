#include "main.h"

#define BUFFER_SIZE 1024

static ssize_t read_and_copy_file(const char *source_file, char **buffer,
int source_fd);

static void write_buffer_to_file(const char *destination_file,
int destination_fd, char *buffer, int buffer_len);

/**
* main - copies content of one file to another
* @argc: number of arguments
* @argv: pointer to arguments
*
* Return: 0 (SUCCESS)
*/

int main(int argc, char *argv[])
{
	int source_fd, destination_fd, bytes_read, close_status;

	char *buffer, *source_file, *destination_file;

	buffer = NULL;
	bytes_read = 1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_file = argv[1];
	destination_file = argv[2];

	source_fd = open(source_file, O_RDONLY);
	destination_fd = open(destination_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (bytes_read > 0)
	{
		bytes_read = read_and_copy_file(source_file, &buffer, source_fd);
		if (!bytes_read)
			break;
		write_buffer_to_file(destination_file, destination_fd, buffer, bytes_read);
	}

	free(buffer);

	close_status = close(source_fd);
	if (close_status < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}

	close_status = close(destination_fd);
	if (close_status < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_fd);
		exit(100);
	}

	return (0);
}

/**
* read_and_copy_file - reads a file into buffer
* @source_file: source file to read form
* @buffer: pointer to pointer of buffer
* @source_fd: file descriptors
*
* Return: current size of buffer.
*/

static ssize_t read_and_copy_file(const char *source_file,
char **buffer, int source_fd)
{
	int bytes_read;

	if (source_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_file);
		exit(98);
	}

	if (!(*buffer))
		*buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (!(*buffer))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_file);
		exit(98);
	}

	bytes_read = read(source_fd, *buffer, BUFFER_SIZE);

	if (bytes_read < 0)
	{
		free(*buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_file);
		exit(98);
	}

	return (bytes_read);
}
/**
* write_buffer_to_file - write the buffer to file.
* @destination_file: dest for buffer
* @destination_fd: file descriptors for dest_file
* @buffer: pointer to buffer
* @buffer_len: current size of buffer.
*/

static void write_buffer_to_file(const char *destination_file,
int destination_fd, char *buffer, int buffer_len)
{
	if (destination_fd < 0 || !buffer)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_file);
		exit(99);
	}

	if (write(destination_fd, buffer, buffer_len) < 0)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_file);
		exit(99);
	}
}
