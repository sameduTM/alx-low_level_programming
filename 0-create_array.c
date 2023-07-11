#include "main.h"
#include <stdlib.h>
/**
  * create_array - creates array of characters
  * @size: checks size of pointer
  * @c: checks the array passed
  *
  * Return: pointer to array, otherwise 0
  */
char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(c) * size);
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';

	return (str);
}
