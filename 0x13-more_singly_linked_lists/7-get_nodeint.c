#include "lists.h"

/**
 * get_nodeint_at_index - Find the given node of
 * a listint_t linked list.
 * @head: the head of the listint_t list.
 * @index: The index of the node to find
 *
 * Return: NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}

	return (head);
}
