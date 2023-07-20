#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head of dlistint_t list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; (h = h->next))
	{
		printf("%d\n", h->n);
		nodes++;
	}

	return (nodes);
}
