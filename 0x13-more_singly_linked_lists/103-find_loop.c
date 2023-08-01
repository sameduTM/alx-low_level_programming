#include "lists.h"

/**
 * find_listint_loop - finds loop in a linked list
 *
 * @head: pointer to linked list to search
 *
 * Return: address of node where loop starts, NULL otherwise
 */
listint_t *find_listint_loop(listint_t *head)
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
