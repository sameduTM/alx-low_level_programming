#include "main.h"
/**
  * is_prime_number - checks for prime number
  * @n: number to check
  *
  * Return: Returns 1 if prime number, 0 otherwise
  */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n % i != 0)
	{
		i++;
		is_prime_number(i + 1);
	}
	if (n % i == 0 || n % i == n)
	{
		return (0);
	}

	return (1);
}
