#include <stdio.h>
#include "lists.h"

/**
  * print_list - prints all elements of a list_t list
  * @h: singly linked listparameter
  * Return: total number of nodes in the list
  */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
