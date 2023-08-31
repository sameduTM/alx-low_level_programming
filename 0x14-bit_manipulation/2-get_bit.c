#include "main.h"

/**
  * get_bit - get bit value at index
  * @n: number to check
  * @index: index to check
  *
  * Return: value of bit at index, -1 otherwise
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(n) * 8)
		return (-1);

	if (n & mask)
		return (1);
	else
		return (0);
}
