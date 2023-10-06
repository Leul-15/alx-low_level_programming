#include "hash_tables.h"
#include <string.h>

/**
  * new_key - update value of key if key exists
  * @h: head of linked list
  * @key: key of node
  * @value: value of node
  * Return: 1 if succesful, 0 if not match, -1 if malloc failed
  */
int new_key(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *new_node = *h;
	char *val;

	for (; new_node; new_node = new_node->next)
		if (strcmp(new_node->key, key) == 0)
		{
			val = strdup(value);
			if (!val)
				return (-1);
			free(new_node->value);
			new_node->value = val;
			return (1);
		}
	return (0);
}

/**
  * create_node - adds a node to the beginning of a linked list hash_node_t
  * @h: head of the linked list
  * @key: key of node
  * @value: value of node
  * Return: new head
  */
hash_node_t *create_node(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *node;
	char *ke, *val;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	ke = strdup(key);
	if (!ke)
	{
		free(node);
		return (NULL);
	}
	val = strdup(value);
	if (!val)
	{
		free(node);
		free(ke);
		return (NULL);
	}

	node->key = ke;
	node->value = val;
	node->next = *h;

	*h = node;
	return (*h);
}

/**
  * hash_table_set - adds an element to the hash table
  * @ht: is the hash table you want to add or update the key/value to
  * @key: is the key and can not be an empty string
  * @value: is the value associated with the key (must be duplicated)
  * Return: 1 if it succeeded, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int count;
	hash_node_t *new_node;
	int update;

	if (!ht || strcmp(key, "") == 0)
		return (0);

	count = key_index((const unsigned char *)key, ht->size);

	update = new_key(&(ht->array[count]), key, value);
	if (update == 0)
	{
		new_node = create_node(&(ht->array[count]), key, value);
		if (!new_node)
		{
			return (0);
		}
		ht->array[count] = new_node;
	}
	else if (update == -1)
		return (0);
	return (1);

}
