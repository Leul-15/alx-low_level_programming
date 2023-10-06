#include "hash_tables.h"
/**
 * hash_table_print - prints hashtable
 * @ht: the hash table you want to print
 */
void hash_table_print(const hash_table_t *ht)
{

unsigned long int n;
hash_node_t *new_node;
short int c = 0;

if (ht == NULL)
	return;

putchar('{');
for (n = 0; n < ht->size; n++)
{
	new_node = ht->array[n];
	while (new_node != NULL)
	{
		if (c)
			printf(", ");

		printf("'%s': '%s'", new_node->key, new_node->value);
		new_node = new_node->next;

		if (c == 0)
			c = 1;
	}
}
printf("}\n");
}
