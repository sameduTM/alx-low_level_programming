#include <stdio.h>

/**
  * bef_main - executed before main
  *
  * Return: nothing
  */
void __attribute__((constructor)) bef_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
