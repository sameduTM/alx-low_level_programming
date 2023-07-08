#include "main.h"
/**
  * _pow_recursion - returns value of x raised to y
  * @x: checks the integer x
  * @y: checks the integer y
  *
  * Return: -1 if y < 0, value of x otherwise
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y <= 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
