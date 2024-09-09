#include <stdio.h>
#include "search_algos.h"
/**
* print_array - Prints the current subarray being searched
* @array: The array to print
* @left: The starting index of the subarray
* @right: The ending index of the subarray
*/
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
* advanced_binary_rec - Recursive function to perform binary search
* @array: Pointer to the first element of the array
* @left: Left index of the subarray
* @right: Right index of the subarray
* @value: Value to search for
*
* Return: Index where value is located, or -1 if not found
*/
int advanced_binary_rec(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (right >= left)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		/* Check if mid is the first occurrence of value */
		if (array[mid] == value && (mid == left || array[mid - 1] != value))
			return ((int)mid);

		/* If value is less than or equal to mid, search in the left half */
		if (array[mid] >= value)
			return (advanced_binary_rec(array, left, mid, value));
		return (advanced_binary_rec(array, mid + 1, right, value));
	}

	return (-1);
}

/**
* advanced_binary - Searches for a value in a sorted array of integers
* @array: Pointer to the first element of the array
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: Index where value is located, or -1 if not found
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (advanced_binary_rec(array, 0, size - 1, value));
}
