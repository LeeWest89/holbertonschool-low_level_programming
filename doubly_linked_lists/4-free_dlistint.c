#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: the list
 */

void free_dlistint(dlistint_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
