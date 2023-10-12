#include <stddef.h>
#include "lists.h"
/**
 * dlistint_len - finds number of elements in doubly list
 * @h: pointer to head of doubly list
 *
 * Return: number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
