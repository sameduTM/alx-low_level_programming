#include "main.h"

/**
  * read_textfile - read textfile, prints
  * @filename: file to read text from
  * @letters: number of letters to print
  *
  * Return: number of letters
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char c;
	size_t count = 0;

	fp = fopen(filename, "r");

	while (count < letters)
	{
		c = fgetc(fp);

		if (feof(fp))
			break;
		_putchar(c);
		count++;
	}
	fclose(fp);

	return (count);
}
