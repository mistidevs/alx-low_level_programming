#include "lists.h"

/**
* print_listint - print elements in a singly linked list
* @h: pointer to listint_t singly linked list
*
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
const listint_t *current;
size_t count;

current = h;
count = 0;

while (current != NULL)
{
	printf("%d\n", current->n), count++;
	current = current->next;
}

return (count);
}
