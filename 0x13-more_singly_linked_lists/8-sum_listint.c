#include "lists.h"

/**
  * sum_listint - sum of all data of list
  * @head: pointer to head of list
  *
  * Return: sum of all data
  */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
