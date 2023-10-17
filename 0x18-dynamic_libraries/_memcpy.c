#include <stdio.h>
/**
 * _memcpy - copies memory area from 'src' to 'dest'
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the number of bytes to be copied
 *
 * Return: a pointer to the destination memory area 'dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
