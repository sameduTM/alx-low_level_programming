#include "lists.h"

/**
  * print_list - prints all elements of list_t
  * @h: pointer to to node list
  *
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		} else
			printf("[%d] %s", h->len, h->str);
		printf("\n");
		h = h->next;
		i++;
	}

	return (i);
}
