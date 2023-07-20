#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: the node being searched for
 *
 * Return: NULL if the node does not exist or nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	for(; index != 0; index--)
		head = head->next;

	return (head);
}
