#include "lists.h"

/**
 * free_listint2 - A function that frees the list.
 * @head: The address of the head of the list.
 *
 * Description: Set the head to NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
