#include "lists.h"

/**
 * reverse_ - recursively reverses a listint list
 *
 * @first: node to reverse
 * @second: node after node to reverse
 *
 * Return: void
 */

listint_t *reverse_(listint_t *first, listint_t *second)
{
	listint_t *temp, *prev = NULL;

	temp = first;

	while (temp->next != second)
	{
		prev = temp;
		temp = temp->next;
	}

	if (prev != NULL)
		prev->next = first;
	second = first->next;
	first->next = temp->next;

	if (first != temp && second != first)
		second = reverse_(second, first);
	temp->next = second;

	return (temp);
}

/**
 * reverse_listint - reverses a listint list
 *
 * @head: list to reverse
 *
 * Return: new head of list
 */

listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);

	*head = reverse_(*head, NULL);

	return (*head);
}
