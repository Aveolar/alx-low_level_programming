#include "lists.h"

/**
 * listint_len - A function that returns the number of elements in linked list
 * 
 * @h: function parameter (list)
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes += 1;
		h = h->next;
	}

	return (num_nodes);
}
