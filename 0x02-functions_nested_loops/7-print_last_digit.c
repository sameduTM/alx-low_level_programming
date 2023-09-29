#include "main.h"
/**
* print_last_digit - prints last digit
* @n: number to check
*
* Return: value of last digit
*/
int print_last_digit(int n)
{
	int val;

	if (n < 0)
		n *= -1;

	val = (n % 10) + '0';

	_putchar(val);

	return (val - '0');
}
