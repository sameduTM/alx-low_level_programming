#include "main.h"

/**
  * print_binary - converts number to binary
  * @n: number to convert
  *
  * Return: binary rep of number, 0 otherwise
  */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leading_zeros;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1UL << (sizeof(n) * 8 - 1);
	leading_zeros = 1;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			leading_zeros = 0;
		}
		else if (!leading_zeros)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
