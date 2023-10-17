#include <stdio.h>
/**
 * _strcpy - copies a string from source to destination
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the destination string (dest).
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
