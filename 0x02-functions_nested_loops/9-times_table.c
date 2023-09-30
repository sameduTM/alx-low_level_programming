#include "main.h"
/**
 * print_times_table - prints time table
 * @n: n times table to print
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
        int i, j, k, l;

        if (n > 15 || n < 0)
                return;
        for (i = 0; i <= n; i++)
        {
                for (j = 0; j <= n; j++)
                {
                        k = j * i;
                        if (k <= 9)
                        {
                                if (j != 0 && j < 100)
                                {
                                        _putchar(' ');
                                        _putchar(' ');
                                }
                                _putchar(k + '0');
                        }
                        if (k > 9 && k <= 99)
                        {
                                _putchar(' ');
                                _putchar((k / 10) + '0');
                                _putchar((k % 10) + '0');

                        }
                        if (k > 99)
                        {
                                _putchar((k / 100) + '0');
                                l = k - 100;
                                _putchar((l / 10) + '0');
                                _putchar((l % 10) + '0');
                        }
                        if (j != n)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                }
                _putchar('\n');
        }
}

