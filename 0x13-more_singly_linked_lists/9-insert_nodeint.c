#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new_n;
	listint_t *temp_m = *head;

	new_n = malloc(sizeof(listint_t));
	if (!new_n || !head)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}

	for (count = 0; temp_m && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new_n->next = temp_m->next;
			temp_m->next = new_n;
			return (new_n);
		}
		else
			temp_m = temp_m->next;
	}

	return (NULL);
}
