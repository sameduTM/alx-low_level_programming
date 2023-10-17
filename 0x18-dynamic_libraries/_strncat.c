#include <stdio.h>
/**
 * _strncat - concatenates 'n' characters from 'src' to 'dest'
 * @dest: the destination string to which 'src' will be appended
 * @src: the source string to be appended to 'dest'
 * @n: the maximum number of characters to append
 *
 * Return: a pointer to the resulting string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Calculate the length of 'dest' */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append 'n' characters from 'src' to 'dest' */
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
