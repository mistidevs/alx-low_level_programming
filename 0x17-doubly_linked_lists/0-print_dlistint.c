#include "lists.h"

/**
* print_dlistint - printing a doubly linked list
* @h: pointer to first node
*
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
dlistint_t *curr;
size_t count;

if (h == NULL)
	return (0);

count = 0;
curr = (dlistint_t *)h;
while (curr != NULL)
{
	printf("%d\n", curr->n);
	curr = curr->next;
	count++;
}

return (count);
}
