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
	listint_t *new_node = malloc(sizeof(listint_t)), *last;
	
	if (new_node == NULL)
	{
		return (NULL);
	}

	last = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;

	return (last);
}
