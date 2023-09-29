#include "main.h"
/**
* print_last_digit - prints last digit
* @n: number to check
*
* Return: value of last digit
*/
int print_last_digit(int n)
{
	long int val, m;

	m = (long int)n;

	if (m < 0)
		m *= -1;

	val = (m % 10) + '0';

	_putchar(val);

	return (val - '0');
}
