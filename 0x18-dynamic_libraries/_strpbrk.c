#include <stdio.h>
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string to be searched
 * @accept: the string containing characters to search for
 *
 * Return: a pointer to the first occurrence
 * in 's' of any character from 'accept',
 * or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int i = 0;

		while (accept[i])
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}

	return (NULL);
}
