#include <stdlib.h>
#include <stdio.h>
/**
  * array_range - creates an array of integers
  * @min: lowest value of array
  * @max: largest value of array
  *
  * Return: pointer to new array, otherwise NULL
  */
int *array_range(int min, int max)
{
	int *r;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	r = malloc(sizeof(int) * (max + 1));

	if (r == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		r[i] = min++;
		i++;
	}
	return (r);
}
