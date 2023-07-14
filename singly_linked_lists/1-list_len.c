#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list.
 * @h: the linked list.
 *
 * Return: number of elements of the list
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
