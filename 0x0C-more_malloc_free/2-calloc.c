#include <stdlib.h>
#include <stdio.h>
/**
  * _calloc - allocates memory for an array
  * @nmemb: number of array elements
  * @size: size of each data type
  *
  * Return: pointer to allocated memory, otherwise NULL
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
