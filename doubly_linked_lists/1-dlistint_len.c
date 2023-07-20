#include "lists.h"

/**
 * dlistint_len - prints number of elements of a dlistint_t list
 * @h: the head of dlistint_t list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; (h = h->next))
		nodes++;

	return (nodes);
}
