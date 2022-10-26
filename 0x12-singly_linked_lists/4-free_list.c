#include "lists.h"
#include <stdlib.h>

/**
 * free_list - define function
 * @head: describe argument
 *
 * Return: head
 */

void free_list(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}
