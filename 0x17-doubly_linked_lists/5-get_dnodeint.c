#include "lists.h"

/**
  * get_dnodeint_at_index - get node at a given index from a doubly linked list
  * @head: start of doubly linked list
  * @index: index to return value
  * Return: If the node does not exist - NULL.
  *         Otherwise - the address of the located node.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
