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
	char *s = malloc(sizeof(str));

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		s[i] = *str++;
		i++;
	}

	return (s);
}
