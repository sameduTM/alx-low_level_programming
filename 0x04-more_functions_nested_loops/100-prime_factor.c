#include <stdio.h>
#include "main.h"
/**
 * main - checks the code that prints largest prime factor of number
 *
 * Return: 0 Always
 */
int main(void)
{
	int num = 1231952, i = 2, j;

	int mid = num / 2 - 1;

	while (mid >= 2)
	{
		if (num % mid == 0)
		{
			j = mid / 2;
			while (j > 2)
			{
				if (mid % j == 0)
				{
					break;
				}
				else
				{
					printf("%d\n", mid);
					return (0);
				}
				j--;
			}
		}
		mid--;
	}
}
