#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *preverse = NULL;
	listint_t *next_n = NULL;


	while (*head)
	{
		next_n = (*head)->next_n;
		(*head)->next_n = preverse;
		preverse = *head;
		*head = next_n;
	}

	*head = preverse;

	return (*head);
}
