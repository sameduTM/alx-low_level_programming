#include "lists.h"

/**
  * pop_listint - deletes head node
  * @head: pointer to head of a list
  *
  * Return: head nodes data
  */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int val;

	if (temp == NULL)
	{
		return (0);
	}

	*head = temp->next;
	val = temp->n;

	free(temp);

	return (val);
}
