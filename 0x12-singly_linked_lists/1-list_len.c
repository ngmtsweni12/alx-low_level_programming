#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints all elements of a list_t list
 * @h: singly linked listparameter
 *
 * Return: total number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
