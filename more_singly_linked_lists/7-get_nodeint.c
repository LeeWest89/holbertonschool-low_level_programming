#include "lists.h"

/**
 * get_nodeint_at_index -returns the nth node of a listint_t linked list
 * @head: pointer to thhead of the list
 *
 * Return: if the node does not exist, return NULL or
 *	the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
