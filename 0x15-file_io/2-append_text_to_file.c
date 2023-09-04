#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
  * append_text_to_file - append text to the end of file
  * @filename: file to write to
  * @text_content: text to append
  *
  * Return: 1 if pass, -1 if fail
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp = 0, e = 0, l = 0;

	if (filename == NULL)
		return (-1);
	else if (!text_content || !text_content[0])
		return (1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	while (text_content[l])
		l++;

	e = write(fp, text_content, l);

	if (e == -1)
		return (-1);
	close (fp);

	return (-1);
}
