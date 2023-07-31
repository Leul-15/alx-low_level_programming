#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_m = *head;
	listint_t *curr = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_m);
		return (1);
	}

	while (count < index - 1)
	{
		if (!temp_m || !(temp_m->next))
			return (-1);
		temp_m = temp_m->next;
		count++;
	}


	curr = temp_m->next;
	temp_m->next = curr->next;
	free(curr);

	return (1);
}