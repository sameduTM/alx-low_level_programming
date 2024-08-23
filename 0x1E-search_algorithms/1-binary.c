#include <stdio.h>
#include "search_algos.h"
/**
* binary_search - searches for value in array using binary algo
* @array: pointer to the first elementof array
* @size: number of elements in array
* @value: value to search for
*
* Return: position index, otherwise -1
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned long i = 0;

	int l = 0, r, m, k, j = 0;

	r = size - 1;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		k = l;
		m = (l + r) / 2;

		if (k <= r)
		{
			printf("Searching in array: ");
			while (k <= r)
			{
				printf("%d", array[k]);
				if (k != r)
					printf(", ");
				k++;
			}
			if (j != r)
				printf("\n");
		}
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			r = m - 1;
		else
			l = m + 1;

		i++;
	}
	return (-1);
}
