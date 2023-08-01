#include "lists.h"

/**
  * insert_nodeint_at_index - inserts node at given position
  * @head: pointer to head of list
  * @idx: index where node is added
  * @n: value of node
  *
  * Return: address of new node, NULL if it fails
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;

	unsigned int current_idx = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current != NULL)
	{
		if (current_idx == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}

		current = current->next;
		current_idx++;
	}

	free(new_node);
	return (NULL);


}
