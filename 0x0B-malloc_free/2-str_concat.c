#include "main.h"
#include <stdlib.h>
/**
  * str_concat - concats two strings
  * @s1: checks first string
  * @s2: checks second string
  *
  * Return: pointer to new concat string, otherwise NULL
  */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *s3 = malloc(sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}
	while (*s1)
	{
		s3[i] = *s1++;
	}
	i--;
	while (*s2)
	{
		s3[i] = *s2++;
	}

	return (s3);
}
