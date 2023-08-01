#include "lists.h"

/**
  * print_listint_safe - prints linked list
  * @head: pointer to head of list
  *
  * Return: number of nodes in list
  */
/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
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

/**
 * print_listint_safe - prints a linked list, even if it
 * has a loop
 *
 * @head: head of list to print
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	int loop;
	listint_t *loop_node;

	loop_node = find_listint_loop((listint_t *) head);

	for (count = 0, loop = 1; (head != loop_node || loop) && head != NULL; count++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loop_node)
			loop = 0;
		head = head->next;
	}

	if (loop_node != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (count);
}
