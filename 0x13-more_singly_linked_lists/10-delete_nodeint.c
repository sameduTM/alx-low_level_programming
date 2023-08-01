#include "lists.h"

/**
  * delete_nodeint_at_index - deletes node at index
  * @head: pointer to head pointer
  * @index: position of node to be deleted
  *
  * Return: 1 if succeeded, 0 if fail
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *current, *prev;

	if (!head || !*head)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}

	prev = current->next;

	current->next = prev->next;

	free(prev);

	return (1);
}
