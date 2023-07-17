#include <stdlib.h>
#include <stdio.h>
/**
  * _realloc - reallocates a memory block
  * @ptr: pointer to memory previously allocated
  * @old_size: size of allocated space for ptr
  * @new_size: new size of new memory block
  *
  * Return: pointer to new memory block
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned new_size)
{
	int *new;

	ptr = malloc(old_size);
