#include "main.h"

/**
  * create_file - creates a file
  * @filename: name of file created
  * @text_content: NULL terminated string to write to file
  *
  * Return: 1 on success, Otherwise -1
  */

int create_file(const char *filename, char *text_content)
{
	int fn;
	int ln = 0, intlen = 0;
	char *p;

	if (filename == NULL)
		return (-1);

	fn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fn == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (intlen = 0, p = text_content; *p; p++)
			intlen++;
		ln = write(fn, text_content, intlen);
	}

	if (close(fn) == -1 || intlen != ln)
		return (-1);
	return (1);
}
