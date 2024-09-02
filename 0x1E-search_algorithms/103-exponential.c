#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* binarySearch - performs binary search on array within bounds
* @array: pointer to first index of array
* @l: lower bound
* @h: upper bound
* @value: value to search for
*
* Return: index of value, -1 otherwise
*/
int binarySearch(int *array, int l, int h, int value)
{
	int m, i;

	printf("Value found between indexes [%i] and [%i]\n", l, h);
	while (l <= h)
	{
		printf("Searching in array: ");
		for (i = l; i <= h; i++)

		{
			if (i > l)
				printf(", ");
			printf("%i", array[i]);
		}
		printf("\n");

		m = l + (h - l) / 2;

		if (array[m] == value)
			return (m);
		else if (array[m] > value)
			h = m - 1;
		else
			l = m + 1;
	}
	return (-1);
}

/**
* exponential_search - searches for a value in array using exponential search
* @array: pointer to the first element of array to search in
* @size: the number of elements in array
* @value: value to search for
*
* Return: index of value, -1 otherwise
*/
int exponential_search(int *array, size_t size, int value)
{
	int low, high;
	unsigned long i;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		i *= 2;
	}

	low = i / 2;

	high = (i < size) ? i : size - 1;

	return (binarySearch(array, low, high, value));
}
