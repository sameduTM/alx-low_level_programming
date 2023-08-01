#include "lists.h"

/**
  * get_nodeint_at_index - find the position of node
  * @head: pointer to first element of list
  * @index: position of element
  *
  * Return: nth node, otherwise NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index--)
	{
		if (head != NULL)
			head = head->next;
		else
			return (NULL);
	}

	return (head);
}
