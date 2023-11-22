#include <limits.h>
#include "main.h"
/**
 * print_number  - prints an integer
 * @n: integer to print
 *
 * Return: nothing
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n == INT_MIN)
	{
		_putchar('-');
		print_number(-(n / 10));
		_putchar(-(n % 10) + '0');
	}
	else if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
	else
	{
		if (n / 10 != 0)
		{
			print_number(n / 10);
		}
		_putchar((n % 10) + '0');
	}
}
