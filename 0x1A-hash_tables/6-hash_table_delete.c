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

while (i < ht->size)
{
	if (ht->array[i] != NULL)
	{
		elem = ht->array[i];
		while (elem != NULL)
		{
			next_node = elem->next;
			free(elem->key);
			free(elem->value);
			free(elem->next);
			free(elem);
			elem = next_node;
		}
	}
	i++;
}
free(ht->array);
ht = NULL;
}
