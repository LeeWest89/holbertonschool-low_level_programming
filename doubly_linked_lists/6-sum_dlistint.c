#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: the sum of the list or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
