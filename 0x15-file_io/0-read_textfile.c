#include "main.h"

/**
  * read_textfile - reads a text file and prints it out
  * @filename: pointer to filename
  * @letters: number of letters to read and print
  *
  * Return: number of letters printed, 0 otherwise
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	int ln, wrtn;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
		return (0);

	fn = open(filename, O_RDONLY);
	if (fn == -1)
	{
		free(buffer);
		return (0);
	}

	ln = read(fn, buffer, letters);

	if (ln == -1)
	{
		free(buffer);
		close(fn);
		return (0);
	}

	wrtn = write(STDOUT_FILENO, buffer, ln);

	free(buffer);
	close(fn);
	if (wrtn != ln)
		return (0);
	return (ln);

}
