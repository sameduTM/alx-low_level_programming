#include "main.h"
/**
 * main - computes and prints sum of all multiples of 3 or 5
 *
 * Return: 0
 */
int main(void)
{
	int x = 1024, i, sum = 0;

	for (i = 0; i < x; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%i\n", sum);

	return (0);
}
