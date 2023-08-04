#include "main.h"
/**
 * get_bit - find value of a bit at index,
 * @n: value of bit
 * @index: index of bit
 *
 * Return: value of bit, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k;

	if (index > 63)
	{
		return (-1);
	}

	k = 1 << index;

	return ((n & k) > 0);
}
