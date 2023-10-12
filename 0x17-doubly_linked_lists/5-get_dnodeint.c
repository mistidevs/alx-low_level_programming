#include "lists.h"

/**
* get_dnodeint_at_index - getting a node at a
* particular index in a doubly linked list
* @head: pointer to first node
* @index: index of the node
*
* Return: nth node or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *curr;
unsigned int i;

if (head == NULL)
	return (NULL);

curr = head;
i = 0;
while (curr != NULL && i < index)
{
	curr = curr->next;
	i++;
}

if (i != index)
	return (NULL);

return (curr);
}
