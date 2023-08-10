#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
  * append_text_to_file - appends text at end of file
  * @filename: name of the file
  * @text_content: string to add at end of file
  *
  * Return: 1 if success, -1 if failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fn, i, len = 0, j;

	if (filename == NULL)
		return (-1);

	fn  = open(filename, O_WRONLY | O_APPEND, 0600);

	if (fn == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (i = 0; text_content[i]; i++)
		len++;

	j = write(fn, text_content, len);

	if (j == -1)
	{
		close(fn);
		return (-1);
	}
	close(fn);

	return (1);
}
