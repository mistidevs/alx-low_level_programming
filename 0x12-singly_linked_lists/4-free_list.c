#include "lists.h"

/**
* free_list - free a list
* @head: pointer to first node of the list
*
* Return: void
*/

void free_list(list_t *head)
{
list_t *current;

current = head;

while (current != NULL)
{
	list_t *next = current->next;
	free(current->str);
	free(current);
	current = next;
	if (current->next == NULL)
		free(next);
}
}
