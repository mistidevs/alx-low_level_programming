#include "hash_tables.h"

/**
* hash_table_get - getting the value associated with a key
* @ht: hash table
* @key: key to get value of
*
* Return: value or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index, length;
hash_node_t *elem;

if (ht = NULL || key == NULL || strlen(key) == 0)
	return (NULL);

index = key_index((const unsigned char *)key, ht->size);
}
