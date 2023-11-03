#include "hash_tables.h"

/**
* hash_table_set - adds an element to a hash table
* @ht: hash table
* @key: the key
* @value: the value of the element
*
* Return: 1(Success) ; 0(Otherwise)
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *elem, *temp;
unsigned long int index;

if (key == NULL || strlen(key) == 0 || value == NULL || ht == NULL)
	return (0);
index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];

while (temp != NULL)
{
	if (strcmp(temp->key, key) == 0)
	{
		free(temp->value);
		temp->value = strdup(value);
		if (temp->value == NULL)
			return (0);
		return (1);
	}
	temp = temp->next;
}

elem = malloc(sizeof(hash_node_t));
if (elem == NULL)
	return (0);
elem->key = strdup(key);
if (elem->key == NULL)
{
	free(elem);
	return (0);
}
elem->value = strdup(value);
if (elem->value == NULL)
{
	free(elem->key);
	free(elem);
	return (0);
}
elem->next = ht->array[index];
ht->array[index] = elem;
return (1);
}
