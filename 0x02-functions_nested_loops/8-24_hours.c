#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int h = 0, m;

	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
