#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_strings - prints string
  * @separator: string btn strings
  * @n: number os string to be passed
  *
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;

	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);

		if (str == NULL)
		{
			printf("(nil)\n");
			if (i != n - 1)
			{
				printf("%s", separator);
				continue;
			}
		}
		printf("%s", str);
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
