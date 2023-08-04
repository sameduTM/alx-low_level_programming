#include "main.h"

/**
  * clear_bit - sets value of bit at index to 0
  * @n: value to check index
  * @index: index of n to check
  *
  * Return: 1 if success, -1 if fail
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = *n & ~(1ul << index);

	return (1);
}
