#include "hash_tables.h"

/**
* hash_table_print - printing a hash table
* @ht: the hash table
*
* Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
hash_node_t *elem;
unsigned long int i = 0, flag = 0;

if (ht == NULL)
	exit(EXIT_SUCCESS);

printf("{");
while (i < ht->size)
{
	if (ht->array[i] != NULL)
	{
		elem = ht->array[i];
		while (elem != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s' : '%s'", elem->key, elem->value);
			elem = elem->next;
			flag = 1;
		}
	}
	i++;
}
printf("}\n");
}
