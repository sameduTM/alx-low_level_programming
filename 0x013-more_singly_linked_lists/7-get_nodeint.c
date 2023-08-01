#include "lists.h"

/**
  * get_nodeint - find the position of node
  * @head: pointer to first element of list
  * @index: position of element
  *
  * Return: nth node, otherwise NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	unsigned int i = 0;

	current = head;

	while (head != NULL)
	{
		if (i == index)
		{
			break;
		}
		current = current->next;
		i++;
	}

	return (current);
}
