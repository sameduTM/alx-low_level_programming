#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
  * array_iterator - executes a function given as a
  * parameter on each element of an array.
  * @array: pointer to array variable
  * @size: size of the array
  * @action: pointer to function
  *
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == 0 || action == 0)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
