#include "hash_tables.h"

/**
* hash_table_delete - deleting a hash table
* @ht: the hash table
*
* Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *elem, *next_node;
unsigned long int i;

if (ht == NULL)
	exit(EXIT_SUCCESS);

for (i = 0; i < ht->size; i++)
{
	elem = ht->array[i];
	while (elem != NULL)
	{
		next_node = elem->next;
		free(elem->key);
		free(elem->value);
		free(elem);
		elem = next_node;
	}
}
free(ht->array);
free(ht);
}
