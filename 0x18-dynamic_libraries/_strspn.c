#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be analyzed
 * @accept: the string containing characters to match
 *
 * Return: the number of bytes in the initial segment of 's' which consist
 *         only of characters from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s && !found)
	{
		int i = 0;

		while (accept[i])
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			i++;
		}
		if (!accept[i])
		{
			found = 1;
		}
		s++;
	}

	return (count);
}
