#include "lists.h"

/**
* print_listint_safe - printing nodes with the address in memory
* @head: pointer to first node
*
* Return: number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
hash_table_t *ht = NULL;

if (head == NULL)
{
	printf("0\n");
	exit(98);
}

ht = hash_table_create(1024);
if (ht == NULL)
{
	printf("Error: could not create hash table\n");
	exit(98);
}

while (head != NULL)
{
	printf("[%p] %d\n", (void *)head, head->n);
	count++;

	if (hash_table_get(ht, (char *)head) != NULL)
	{
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
    		break;
	}

	hash_table_set(ht, (char *)head, (char *)head);
	head = head->next;
}

hash_table_delete(ht);
return (count);
}
