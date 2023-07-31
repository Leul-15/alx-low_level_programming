#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **new_list;
	size_t count;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (count = 0; count < s - 1; count++)
		new_list[count] = list[count];
	new_list[count] = new;
	free(list);
	return (new_list);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count, number = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (count = 0; count < number; count++)
		{
			if (head == list[count])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (number);
			}
		}
		number++;
		list = _r(list, number, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (number);
}
