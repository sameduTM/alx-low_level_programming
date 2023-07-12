#include "main.h"
#include <stdlib.h>
/**
  * str_concat - checks for NULL value
  * @s1: checks first string
  * @s2: checks second string
  *
  * Return: value of s1 and s2 to allocate fxn
  */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	return (allocate_concat(s1, s2));
}
/**
  * allocate_concat - concats two strings
  * @s1: checks the string
  * @s2: checks string 2
  *
  * Return: Concatenated string, Otherwise NULL
  */
char *allocate_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *s3;
	int size;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	j++;
	size = i + j;
	s3 = malloc(size * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}
	while (k < i)
	{
		s3[k] = *s1++;
		k++;
	}
	while (k < size)
	{
		s3[k] = *s2++;
		k++;
	}
	s3[k] = '\0';

	return (s3);
}
