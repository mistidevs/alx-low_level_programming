#include "lists.h"

/**
* free_listint - free a list
* @head: pointer to first node of the list
*
* Return: void
*/

void free_listint(listint_t *head)
{
listint_t *current = head;

while (current != NULL)
{
	listint_t *next = current->next;

	free(current);
	current = next;
}
}
