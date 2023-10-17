#include <stdio.h>
/**
* _isalpha - checks if a character is an alphabetic character
* @c: the character to be checked
*
* Return: 1 if 'c' is an alphabetic character, 0 otherwise.
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
