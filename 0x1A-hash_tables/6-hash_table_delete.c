#include "hash_tables.h"

/**
  * hash_table_delete - deletes all elements in a hashtable
  * @ht: hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *temp, *del;

	if (ht)
	{
		for (n = 0; n < ht->size; n++)
		{
			temp = ht->array[n];
			while (temp)
			{
				del = temp;
				temp = temp->next;
				free(del->key);
				free(del->value);
				free(del);
			}
		}
		free(ht->array);
		free(ht);
	}
}
