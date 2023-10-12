#include "lists.h"

/**
* delete_dnodeint_at_index - deleting a node ins a doubly linked list
* @head: pointer to pointer to first node
* @index: index of the list where the new node will be added
*
* Return: 1 or -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *curr, *prev, *next;
unsigned int i = 0;

if (*head == NULL || head == NULL)
	return (-1);

curr = *head;
prev = NULL;
while (curr != NULL && i < index)
{
	prev = curr;
	curr = curr->next;
	i++;
}

if (curr == NULL)
	return (-1);

if (prev == NULL)
	*head = curr->next;

next = curr->next;
if (prev != NULL)
	prev->next = next;
if (next != NULL)
	next->prev = prev;

free(curr);
return (1);
}
