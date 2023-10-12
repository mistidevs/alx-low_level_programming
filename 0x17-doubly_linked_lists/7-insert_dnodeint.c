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
dlistint_t *curr, *new_node;
unsigned int i = 0;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

if (idx == 0)
{
	new_node->next = *h;
	if (*h != NULL)
		(*h)->prev = new_node;
	*h = new_node;
	return (new_node);
}

curr = *h;
while (curr != NULL && i < idx - 1)
{
	curr = curr->next;
	i++;
}

if (curr == NULL)
{
	free(new_node);
	return (NULL);
}

new_node->next = curr->next;
new_node->prev = curr;
if (curr->next != NULL)
	curr->next->prev = new_node;
curr->next = new_node;

return (new_node);
}
