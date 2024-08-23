#include <stdio.h>
#include "search_algos.h"
/**
* linear_search - search value in array using linear search
* @array: pointer to the first elementof array
* @size: number of elements in array
* @value: value to search for
*
* Return: position index of value, -1 otherwiise
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned long i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
