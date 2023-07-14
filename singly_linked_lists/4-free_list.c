#include "lists.h"

/**
 * free_list - frees a list
 * @head: the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
