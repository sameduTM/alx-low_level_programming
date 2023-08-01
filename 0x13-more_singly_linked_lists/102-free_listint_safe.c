#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: Address of the node where loop starts/returns, NULL if no loop
 */
listint_t *finds_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	for (fast = head->next; fast != NULL; fast = fast->next)
	{
		if (fast == fast->next)
			return (fast);
		for (slow = head; slow != fast; slow = slow->next)
			if (slow == fast->next)
				return (fast->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a listint list, even if it has a loop
 *
 * @head: Pointer to the head of the list
 *
 * Return: Number of nodes freed
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *next, *loop_start;
	size_t node_count;
	int is_loop = 1;

	if (head == NULL || *head == NULL)
		return (0);

	loop_start = finds_listint_loop(*head);
	for (node_count = 0; (*head != loop_start || is_loop) && *head != NULL; *head = next)
	{
		node_count++;
		next = (*head)->next;
		if (*head == loop_start && is_loop)
		{
			if (loop_start == loop_start->next)
			{
				free(*head);
				break;
			}
			node_count++;
			next = next->next;
			free((*head)->next);
			is_loop = 0;
		}
		free(*head);
	}
	*head = NULL;
	return (node_count);
}
