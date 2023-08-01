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
	listint_t *current = malloc(sizeof(listint_t));

	unsigned int i = 0;

	if (current == NULL)
	{
		return (NULL);
	}

	if (head == NULL)
	{
		return (NULL);
	}
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
