#include "lists.h"

/**
* insert_dnodeint_at_index - printing a doubly linked list
* @h: pointer to pointer to first node
* @idx: index of the list where the new node will be added
* @n: value of data in the node
*
* Return: number of nodes
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *curr, *next, *new_node;
unsigned int i;

if (*h == NULL && idx != 0)
	return (NULL);

curr = *h;
i = 0;
while (curr != NULL && i < idx)
{
	curr = curr->next;
	i++;
}

if (i != idx)
	return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	return (NULL);

new_node->n = n;
if (*h == NULL && i == 0)
{
	*h = new_node;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

curr = curr->prev;
new_node->prev = curr;
new_node->next = curr->next;
curr->next = new_node;
next = curr->next;
next->prev = new_node;

return (new_node);
}
