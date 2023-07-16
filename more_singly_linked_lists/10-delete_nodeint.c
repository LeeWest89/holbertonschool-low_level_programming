#include "list.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @head: a pointer to the pointer to head of list
 * @index: the index to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *a = *head;
	unsigned int node;

	if (a == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(a);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (a->next == NULL)
			return (-1);
		a = a->next;
	}

	temp = a->next;
	a->next = temp->next;
	free(temp);
	return (1);
}
