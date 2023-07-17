#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * string_nconcat - concats two strings
  * @s1: checks the first string
  * @s2: checks the second string
  * @n: checks the size of byte
  *
  * Return: the values s1, s2 and n
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	return (allocate_nconcat(s1, s2, n));
}
/**
  * allocate_nconcat - concats two strings
  * @s1: checks string 1
  * @s2: checks string 2
  * @n: integer value compared to s2
  *
  * Return: concat string s1 and s2
  */
char *allocate_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int size;
	unsigned int k = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
	{
		size = i + j + n;
	} else
		size = i + n;
	s3 = malloc(sizeof(char) * size);

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
