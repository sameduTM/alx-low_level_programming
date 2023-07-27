#include "lists.h"
/**
  * list_len - determine number of
  * elements is a linked list
  * @h: pointer to head on linked list
  *
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
