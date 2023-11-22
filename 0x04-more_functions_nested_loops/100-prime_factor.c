#include <stdio.h>
#include "main.h"
/**
 * main - checks the code that prints largest prime factor of number
 *
 * Return: 0 Always
 */
int main(void)
{
	long int num = 612852475143;

	long int fc = 2;

	while (num > 1)
	{
		if (num % fc == 0)
			num /= fc;
		else
			fc++;
	}
	printf("%ld\n", fc);

	return (0);
}
