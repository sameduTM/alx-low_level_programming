#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - searches for a value using jump search algo
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: position index, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int i = 0, m = sqrt(size), l = 0, h = m, sz = size;

	if (array == NULL)
		return (-1);

	while (i < sz)
	{
		printf("Value checked array[%i] = [%i]\n", l, array[l]);
		if (h >= sz)
		{
			printf("Value found between indexes [%i] and [%i]\n", l, h);
			while (l < sz)
			{
				printf("Value checked array[%i] = [%i]\n", l, array[l]);
				l++;
			}
			return (-1);
		}
		if (array[h] >= value)
		{
			printf("Value found between indexes [%i] and [%i]\n", l, h);
			while (l <= h)
			{
				printf("Value checked array[%i] = [%i]\n", l, array[l]);
				if (array[l] == value)
					return (l);
				l++;
			}
		}
		if (array[h] < value)
		{
			l = h;
			h += m;
		}
		i++;
	}

	return (-1);
}
