#include "lists.h"

/**
 * add_node - adds a node to the list
 * @head: a pointer to the head of the list
 * @str: the node to be added
 *
 * Return: NULL on failure or address of new element on success
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head != NULL && str != NULL)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->length = strlen(str);
		new->next = *head;

		*head = new;
	}
	return (new);
}
