#include "main.h"
/**
  * is_palindrome - finds palindrome
  * @s: checks the characters
  *
  * Return: 1 if palindrome, 0 otherwise
  */
int is_palindrome(char *s)
{
	int i = 0;
	char r;
	char q;

	if (*s != '\0')
	{
		i++;
		r = is_palindrome(s + 1);
	}
	if (i >= 0)
	{
		i--;
		q = is_palindrome(s - 1);
	}
	if (r == q)
	{
		return (1);
	}
	
	return (0);
}
