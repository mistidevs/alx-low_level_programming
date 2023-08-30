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
const listint_t *slow, *fast;
int loop_found = 0;

if (head == NULL)
	exit(98);

slow = fast = head;
while (fast != NULL && fast->next != NULL)
{
	slow = slow->next;
	fast = fast->next->next;
	count++;

	if (slow == fast)
	{
		loop_found = 1;
		break;
	}
}

while (head != NULL)
{
	printf("[%p] %d\n", (void *)head, head->n);
	count++;

	if ((void *)head <= (void *)(head->next) && loop_found == 1)
	{
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		break;
	}

	head = head->next;
}

return (count);
}
