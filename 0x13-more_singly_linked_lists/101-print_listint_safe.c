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

if (head == NULL)
{
	printf("0\n");
	exit(98);
}

while (head != NULL)
{
	printf("[%p] %d\n", (void *)head, head->n);
	count++;

	if ((void *)head <= (void *)(head->next))
	{
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		break;
	}

	head = head->next;
}

return (count);
}
