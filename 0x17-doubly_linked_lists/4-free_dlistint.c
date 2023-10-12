#include "lists.h"

/**
* free_dlistint - frees a doubly linked list
* @head: pointer to first node
*
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *curr, *next;

curr = head;

while (curr != NULL)
{
	next = curr->next;
	free(curr);
	curr = next;
}
}
