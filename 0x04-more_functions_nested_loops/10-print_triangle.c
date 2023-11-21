#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j, k = 0;

	if (size <= 0)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		j = size;
		while (j > i)
		{
			_putchar(' ');
			j--;
		}
		k = 0;
		while (k < i)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
	}
}
