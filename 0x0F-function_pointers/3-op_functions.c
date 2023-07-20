#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * op_add - sum
  * op_sub - difference
  * op_mul - product
  * op_div - division result
  * op_mod - remainder of division
  *
  * Return: integer result of function
  */
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}
