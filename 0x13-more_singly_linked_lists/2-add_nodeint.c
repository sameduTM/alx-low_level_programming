#include "lists.h"

/**
  * add_nodeint - adds new node at beginning
  * @head: list containing elements
  * @n: element in list
  *
  * Return: address of new element, NULL otherwise
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	new_node->n = n;

	new_node->next = (*head);

	(*head) = new_node;

	if (*head == NULL)
		return NULL;

	return (*head);
}
