#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * int_index - searches for an integer
  * @array: pointer to array
  * @size: number of elements in array
  * @cmp: pointer to the function to be used to compare values
  *
  * Return: index of first element, -1 otherwise
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
