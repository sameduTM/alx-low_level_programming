#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - sum of all its parameters
  * @n: number of all parameters
  *
  * Return: sum, 0 if n == 0
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
