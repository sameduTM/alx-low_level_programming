#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
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
	int i = 1, sz = size;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < sz && array[i] <= value)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i *= 2;
	}

	return (binary__search(array, i / 2, min(i, sz - 1), value));
}
/**
 * binary__search - binary search function
 * @array: array to search in
 * @l: lowest index
 * @h: highest index
 * @value: value to find in array
 *
 * Return: position index of value found, otherwise -1
 */
int binary__search(int *array, int l, int h, int value)
{
	int m;

	printf("Value found between indexes [%i] and [%i]\n", l, h);
	while (l <= h)
	{
		m = (l + h) / 2;
		printf("Searching in array: ");
		while (l <= h)
		{
			printf("%i", array[l]);
			if (l != h)
				printf(", ");
			l++;
		}
		printf("\n");
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		if (array[m] > value)
			h = m - 1;
	}

	return (-1);
}
