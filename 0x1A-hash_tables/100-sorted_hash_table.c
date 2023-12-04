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
* insert_ordered - inserting a node into a sorted linked list
* @ht: the hash table
* @nd: the node to add
*
* Return: 1 for success; 0 for failure
*/

int insert_ordered(shash_table_t *ht, shash_node_t *nd)
{
shash_node_t *curr;

if (ht->shead == NULL)
{
	ht->shead = nd;
	ht->stail = nd;
	nd->snext = NULL;
	nd->sprev = NULL;
	return (0);
}
if (strcmp(ht->shead->key, nd->key) > 0)
{
	nd->snext = ht->shead;
	nd->sprev = NULL;
	ht->shead->sprev = nd;
	ht->shead = nd;
	return (1);
}
curr = ht->shead;
while (curr != NULL && strcmp(curr->key, nd->key) < 0)
	curr = curr->snext;
if (curr == NULL)
{
	nd->snext = NULL;
	nd->sprev = ht->stail;
	ht->stail->snext = nd;
	ht->stail = nd;
}
else
{
	curr = curr->sprev;
	nd->snext = curr->snext;
	nd->sprev = curr;
	if (curr->snext != NULL)
		curr->snext->sprev = nd;
	else if (curr->snext == NULL)
		ht->stail = nd;
	curr->snext = nd;
}
return (1);
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
insert_ordered(ht, elem);
return (1);
}


/**
* shash_table_get - getting the value associated with a key
* @ht: hash table
* @key: key to get value of
*
* Return: value or NULL
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index;
shash_node_t *elem;

if (ht == NULL || key == NULL || strlen(key) == 0)
	return (NULL);

index = key_index((const unsigned char *)key, ht->size);
if (index >= ht->size)
	return (NULL);

elem = ht->array[index];
while (elem != NULL)
{
	if (strcmp(elem->key, key) == 0)
		return (elem->value);
	elem = elem->next;
}

return (NULL);
}


/**
 * shash_table_print - Prints a hash table using the sorted list
 * @ht: A pointer to the hash table to print
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the sorted list
 */

void shash_table_print(const shash_table_t *ht)
{
shash_node_t *curr;

if (ht == NULL)
	return;

curr = ht->shead;

printf("{");

while (curr != NULL)
{
	printf("'%s': '%s'", curr->key, curr->value);
	if (curr->snext != NULL)
		printf(", ");
	curr = curr->snext;
}

printf("}\n");
}


/**
 * shash_table_print_rev - Prints a hash table using the sorted list
 * in reverse
 * @ht: A pointer to the hash table to print
 *
 * Description: Key/value pairs are printed in the reverse order
 *              they appear in the sorted list
 */

void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *curr;

if (ht == NULL)
	return;

curr = ht->stail;

printf("{");

while (curr != NULL)
{
	printf("'%s': '%s'", curr->key, curr->value);
	if (curr->sprev != NULL)
		printf(", ");
	curr = curr->sprev;
}

printf("}\n");
}


/**
* shash_table_delete - deleting a hash table
* @ht: the hash table
*
* Return: void
*/

void shash_table_delete(shash_table_t *ht)
{
shash_node_t *elem, *next_node;
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
