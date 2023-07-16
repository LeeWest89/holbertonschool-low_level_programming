#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head:pointer to the pointer to the head of the list
 * @idx: is the index of the list where the new node should be added
 * @n: int the new node will contain
 *
 * Return: NULL if new node cant be added or if fails,
 *	the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *a = *head;
	unsigned int count;

	new_node = mallo(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = a;
		*head = new_node;
		return (new_node);
	}

	for (count = 0; count < (idx - 1); count++)
	{
		if (a == NULL || a->next == NULL)
			return (NULL);

		a = a->next;
	}
	new_node->next = a->next;
	a->next = new_node;

	return (new_node);
}
