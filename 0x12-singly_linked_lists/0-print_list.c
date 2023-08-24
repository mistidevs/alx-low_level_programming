#include "lists.h"

/**
* print_list - print elements in a singly linked list
* @h: pointer to list_t singly linked list
*
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
const list_t *current;
size_t count;

current = h;
count = 0;

while (current != NULL)
{
	if (current->str == NULL)
		printf("[0] (nil)\n"), count++;
	else
		printf("[%u] %s\n", current->len, current->str), count++;
	current = current->next;
}

return (count);
}
