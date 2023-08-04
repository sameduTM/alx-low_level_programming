#include "main.h"

/**
  * flip_bits - find no of bits needed
  * to flip one no 2 another
  * @n: first number to check
  * @m: second number to change to
  *
  * Return: number of bits needed
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorv = n ^ m;
	unsigned int i = 0;

	while (xorv)
	{
		if (xorv & 1ul)
		{
			i++;
		}
		xorv = xorv >> 1;
	}

	return (i);
}
