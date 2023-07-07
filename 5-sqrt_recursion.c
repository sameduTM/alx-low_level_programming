#include "main.h"

int _sqrt(int n, int i);
/**
  * _sqrt_recursion - returns natural sqrt of number
  * @n: number to check
  *
  * Return: square root of number, -1 if sqrt DNE
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - calc natural square root
  * @n: check if a perfect square
  * @i: square root to check
  *
  * Return: natural square root
  */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}

	return (_sqrt(n, i + 1));
}
