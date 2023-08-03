#include "main.h"

/**
  * print_binary - prints binary of number
  * @n: number to convert
  *
  * Return: nothing
  */

void print_binary(unsigned long int n)
{
	char c = '0';
	unsigned long int prtbit = 1ul << 63;

	while (!(prtbit & n) && prtbit != 0)
		prtbit = prtbit >> 1;

	if (prtbit == 0)
		write(1, &c, 1);

	while (prtbit)
	{
		if (prtbit & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);

		prtbit = prtbit >> 1;
	}
}
