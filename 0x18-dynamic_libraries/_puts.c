#include <stdio.h>
#include "main.h"
/**
* _puts - prints a string to the standard output (stdout)
* @s: the string to be printed
*
* Return: None (void)
*/
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
