#include "lists.h"

/**
* print_listint_safe - printing nodes with the address in memory
* @head: pointer to first node
*
* Return: number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
const listint_t *current;
size_t count = 0;
const listint_t *slow_ptr = head;
const listint_t *fast_ptr = head;

if (head == NULL)
	exit(98);

while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
{
	slow_ptr = slow_ptr->next;
	fast_ptr = fast_ptr->next->next;

	if (slow_ptr == fast_ptr)
	{
		break;
	}
}

if (fast_ptr == NULL || fast_ptr->next == NULL)
{
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	return (count);
}

current = slow_ptr;
while (current != fast_ptr)
{
	printf("[%p] %d\n", (void *)current, current->n);
	current = current->next;
	count++;
	if (current == slow_ptr)
	{
		printf("-> [%p] %d\n", (void *)current, current->n);
		break;
	}
}

return (count + 1);
}
