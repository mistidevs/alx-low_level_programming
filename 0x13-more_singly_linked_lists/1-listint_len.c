#include "lists.h"

/**
* listint_len - finding number of elements in a singly linked list
* @h: pointer to listint_t singly linked list
*
* Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
const listint_t *current;
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
