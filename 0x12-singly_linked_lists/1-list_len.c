#include <stdio.h>
#include "lists.h"

/**
  * listint_len - prints all elements of a list_t list
  * @h: singly linked listparameter
  * Return: total number of nodes in the list
  */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
