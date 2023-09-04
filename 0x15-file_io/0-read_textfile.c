#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
  * read_textfile - read textfile, prints
  * @filename: file to read text from
  * @letters: number of letters to print
  *
  * Return: number of letters
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp = 0, e = 0, ch_rd = 0;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);

	if (!buffer)
		return (0);

	ch_rd = read(fp, buffer, letters);

	if (ch_rd == -1)
	{
		free(buffer);
		return (0);
	}

	e = write(STDOUT_FILENO, buffer, ch_rd);

	if (e <= 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fp);

	return (ch_rd);
}
