#include "main.h"
/**
 * print_to_98 - prints all natural numbers to 98
 * @n: integer to print
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	if (n == 98)
		printf("98");
	printf("\n");
}
