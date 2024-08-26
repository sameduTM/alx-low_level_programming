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
	int i = 0, m = sqrt(size), l = 0, h = m, k = size, x = 0, j;

	j = size / m + (m - 1);
	if (array == NULL)
		return (-1);

	while (i < j)
	{
		printf("Value checked array[%i] = [%i]\n", l, array[l]);
		if (array[i] == value)
			return (i);
		if (array[h] == value)
		{
			printf("Value found between indexes [%i] and [%i]\n", l, h);
			while (l <= h)
			{
				printf("Value checked array[%i] = [%i]\n", l, array[l]);
				l++;
			}
			return (h);
		}
		if (array[h] > value)
		{
			x = l + 1;
			check_value(x, array, value, l, h);
			return (x);
		}
		l = h;
		h += m;
		if (h > k)
		{
			check_size(l, h, k, array);
			return (-1);
		}
		i++;
	}
	return (-1);
}
/**
 * check_size - check if high value is greater than array size
 * @l: low index of block
 * @h: high index of block
 * @k: array size
 * @array: array to check
 *
 * Return: Always -1
 */
void check_size(int l, int h, int k, int *array)
{
	printf("Value checked array[%i] = [%i]\n", l, array[l]);
	printf("Value found between indexes [%i] and [%i]\n", l, h);
	while (l < k)
	{
		printf("Value checked array[%i] = [%i]\n", l, array[l]);
		l++;
	}
}
/**
 * check_value - checks if value is an element of array
 * @x: the index to be checked
 * @array: the array to be checked
 * @value: value to be checked
 * @l: lower index of block
 * @h: higher index of block
 *
 * Return: nothing
 */
void check_value(int x, int *array, int value, int l, int h)
{
	if (array[x] == value)
	{
		printf("Value found between indexes [%i] and [%i]\n", l, h);
		while (l < h - 1)
		{
			printf("Value checked array[%i] = [%i]\n", l, array[l]);
			l++;
		}
	}
}
