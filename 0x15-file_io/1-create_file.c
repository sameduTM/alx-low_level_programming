#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
  * create_file - creates a file
  * @filename: file name
  * @text_content: string to write to file
  *
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int e = 0, l = 0, fp = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fp == -1)
		return (-1);
	while (text_content && text_content[l])
		l++;

	e = write(fp, text_content, l);

	if (e == -1)
		return (-1);

	close(fp);

	return (1);
}
