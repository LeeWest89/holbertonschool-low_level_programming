#include "lists.h"

/**
 * add_node_end - adds a node to the end of the list
 * @head: a pointer to the head of the list
 * @str: the node to be added
 *
 * Return: NULL on failure or address of new element on success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str != NULL)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}
		else
		{
			temp = *head;

			while (temp->next)
				temp = temp->next;

			temp->next = new;
		}
	}
	return (temp);
}
