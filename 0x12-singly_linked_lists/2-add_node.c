#include "lists.h"
/**
  * add_node - adds a new node at beginning
  * @head: head of list
  * @str: checks the string passed
  *
  * Return: address of new element, otherwise NULL
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	size_t n;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node->len = n;

	new_node->next = *head;

	*head = new_node;

	return (*head);
}
