#include "lists.h"

/**
  * listint_len - print number of elements in a list
  * @h: checks the list
  *
  * Return: number of elements
  */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
