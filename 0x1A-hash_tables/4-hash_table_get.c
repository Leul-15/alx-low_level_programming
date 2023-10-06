#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table
 * @key: is the key to search for
 * Return: value associated with key if found, NULL if failed
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

hash_node_t *new_node;
unsigned long int count;

if (ht == NULL)
	return (NULL);

count = key_index((const unsigned char *) key, ht->size);
new_node = ht->array[count];

while (new_node != NULL)
{
	if (strcmp(new_node->key, key) == 0)
		return (new_node->value);

	new_node = new_node->next;
}
return (NULL);
}
