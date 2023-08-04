#include "main.h"

/**
  * set_bit - set value of bit at index
  * @n: number to obtain bit
  * @index: index of bit
  *
  * Return: 1 if successful, -1 otherwise
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = *n | 1ul << index;

	return (1);
}
