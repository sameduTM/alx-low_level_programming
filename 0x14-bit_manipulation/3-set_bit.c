#include "main.h"

/**
  * set_bit - set bit at index to 1
  * @n: number to chk
  * @index: index to check
  *
  * Return: 1 if success, 0 if failure
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * 8)
		return (-1);

	mask = 1UL << index;

	*n |= mask;

	return (1);
}
