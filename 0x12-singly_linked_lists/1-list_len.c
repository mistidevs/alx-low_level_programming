#include "lists.h"

/**
* list_len - finding number of elements in a singly linked list
* @h: pointer to list_t singly linked list
*
* Return: number of nodes
*/

size_t list_len(const list_t *h)
{
const list_t *current;
size_t count;

current = h;
count = 0;

while (current != NULL)
{
	count++;
	current = current->next;
}

return (count);
}
