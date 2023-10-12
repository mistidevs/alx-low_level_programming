#include "lists.h"

/**
* dlistint_len - printing a doubly linked list
* @h: pointer to first node
*
* Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
dlistint_t *curr;
size_t count;

if (h == NULL)
	return (0);

count = 0;
curr = (dlistint_t *)h;
while (curr != NULL)
{
	curr = curr->next;
	count++;
}

return (count);
}
