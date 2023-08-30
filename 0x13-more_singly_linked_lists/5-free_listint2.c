#include "lists.h"

/**
* free_listint2 - free a list and set head to NULL
* @head: pointer to pointer to first node of the list
*
* Return: void
*/

void free_listint2(listint_t **head)
{
listint_t *current;

if (head == NULL || *head == NULL)
	return;

current = *head;
*head = NULL;

while (current != NULL)
{
	listint_t *next = current->next;

	free(current);
	current = next;
}
}
