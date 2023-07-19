#include <stdio.h>
#include "function_pointers.h"
/**
  * print_name - prints a name
  * @name: pointer to name
  * @f: pointer function
  *
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
