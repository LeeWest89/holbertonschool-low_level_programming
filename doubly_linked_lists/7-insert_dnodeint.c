#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer of the head
 * @idx: index of where the new node should be added. Index starts at 0
 * @n: the node to be inserted
 *
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;

		if (*h)
			(*h)->prev = new_node;

		*h = new_node;
		return (new_node);
	}
	while (temp != NULL)
	{
		count++;
		if (count == idx)
			break;
		temp = temp->next;
	}
	if (temp == NULL && count < idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = temp;
	new_node->next = temp->next;

	if (temp->next)
		temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
