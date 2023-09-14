#include "lists.h"

/**
 * sum_dlistint - count all the elements of a dlistint_t list
 * @head: start of doubly linked list
 *
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
