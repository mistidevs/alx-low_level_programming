#include "hash_tables.h"

/**
* shash_table_create - creating an ordered hash table
* @size: size of the hash table array
*
* Return: pointer to shash table or NULL
*/

shash_table_t *shash_table_create(unsigned long int size)
{
unsigned long int i;
shash_table_t *shash_table = NULL;

if (size < 1)
	return (NULL);

shash_table = malloc(sizeof(shash_table_t));
if (shash_table == NULL)
	return (NULL);

shash_table->size = size;
shash_table->array = malloc(sizeof(shash_node_t *) * size);
if (shash_table->array == NULL)
{
	free(shash_table);
	return (NULL);
}

for (i = 0; i < size; i++)
	shash_table->array[i] = NULL;

shash_table->shead = NULL;
shash_table->stail = NULL;

return (shash_table);
}


/**
* shash_table_set - adds an element to an ordered hash table
* @ht: shash table
* @key: the key
* @value: the value of the element
*
* Return: 1(Success) ; 0(Otherwise)
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *elem, *temp;
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

elem = malloc(sizeof(shash_node_t));
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
