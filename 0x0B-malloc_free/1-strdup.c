#include "main.h"
#include <stdlib.h>
/**
  * _strdup - returns ptr to new space in memory
  * @str: string to be duplicated
  *
  * Return: pointer to the dup string, NULL Otherwise
  */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *s;

	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		s[j] = *str++;
		j++;
	}
	s[j] = '\0';

	return (s);
}
