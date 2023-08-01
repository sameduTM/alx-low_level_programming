#include "lists.h"

/**
  * add_nodeint_end - adds new node at end
  * @head: address of element
  * @n: element on list
  *
  * Return: address of new element, otherwise NULL
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	if (head == NULL)
		return (NULL);
	last = *head;
	if (last != NULL)
		while (last->next != NULL)
			last = last->next;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		last->next = new_node;
		new_node->next = NULL;
	}

	return (new_node);
}
