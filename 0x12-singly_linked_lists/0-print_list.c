#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints
 * all the elements of a list_t list.
 * @h: singly linked list parameter
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int node_count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
