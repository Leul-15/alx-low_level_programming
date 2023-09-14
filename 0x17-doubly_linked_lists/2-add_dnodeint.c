#include "lists.h"

/**
  * add_dnodeint - add node to the beginning of a dlistint_t list
  * @head: beginning of dlistint_t
  * @n: Value to insert into node
  * Return: address of the new element or NULL if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
