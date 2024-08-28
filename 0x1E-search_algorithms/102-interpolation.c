#include <stdio.h>
#include "search_algos.h"
/**
* interpolation_search - searches for value using interpolation search algo
* @array: pointer to first element of array to search in
* @size: number of elements in array
* @value: value to search for
*
* Return: index of value searched, -1 otherwise
*/
int interpolation_search(int *array, size_t size, int value)
{
	int l = 0, h = size - 1, i = 0, sz = size;
	size_t pos;

	if (array == NULL)
	{
		return (-1);
	}
	while (i < sz)
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (value > array[h])
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
		if (value > array[h])
			return (-1);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			l = pos + 1;
		else if (array[pos] > value)
			h = pos - 1;
		sz /= 1;
		i++;
	}
	return (-1);
}
