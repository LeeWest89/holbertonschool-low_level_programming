#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to a pointer of head
 * @n: the integer being added
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *addone, *current;

	addone = malloc(sizeof(dlistint_t));

	if (addone == NULL)
		return (NULL);

	addone->prev = NULL;
	addone->n = n;

	if (*head == NULL)
	{
		addone->prev = NULL;
		*head = addone;
	}

	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = addone;
		addone->prev = current;
	}

	return (addone);
}
