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
	dlistint_int *addone;

	addone = malloc(sizeof(dlistint_t));

	if (addone == NULL)
		return (NULL);

	addone->next = NULL;
	addone->n = n;
	addone->prev = *head;

	if (*head != NULL)
		(*head)->next = addone;
	*head = addone;

	return (addone);
}
