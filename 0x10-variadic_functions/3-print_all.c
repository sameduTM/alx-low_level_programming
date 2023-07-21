#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
  * print_all - prints anything
  * @format: list of types of arguments passed
  *
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	int i, count = strlen(format), j = 0;
	va_list ap;
	float f;
	char *s, c;

	va_start(ap, format);
	while (format[j])
	{
		switch (format[j])
		{
			case 'c':
				c = (char)va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(ap, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
		}
		if (j != count - 1 && (format[j] == 'c' ||
			format[j] == 's' || format[j] == 'i' || format[j] == 'f'))
			printf(", ");
		j++;
	}
	va_end(ap);
	printf("\n");
}
