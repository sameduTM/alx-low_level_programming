#include "lists.h"
/**
  * add_node_end - adds new node at end of list
  * @head: points to pointer
  * @str: string to be checked
  *
  * Return: address of new element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	size_t n;

	new_node = malloc(sizeof(size_t));
	last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node->len = n;
	new_node->next = NULL;

	if (last == NULL)
	{
		*head = new_node;
	} else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}

	return (*head);
}
