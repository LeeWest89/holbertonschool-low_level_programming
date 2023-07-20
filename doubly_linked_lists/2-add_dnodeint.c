#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to a pointer of head
 * @n: the integer being added
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *addonb;

	addonb = malloc(sizeof(dlistint_t));

	if (addonb == NULL)
		return (NULL);

	addonb->prev = NULL;
	addonb->n = n;
	addonb->next = *head;

	if (*head != NULL)
		(*head)->prev = addonb;
	*head = addonb;

	return (addonb);
}
