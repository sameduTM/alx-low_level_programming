#include <stdio.h>
/**
 * _strlen - calculates the length of a string
 * @s: the input string
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
