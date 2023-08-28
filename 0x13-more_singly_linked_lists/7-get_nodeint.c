#include "lists.h"

/**
* get_nodeint_at_index - getting the nth node of a listint_t list
* @head: pointer to first node
* @index: index to print
*
* Return: pointer to appropriate node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current;
unsigned int i, count;

if (head == NULL)
	return (NULL);

current = head;

count = 0;
while (current != NULL)
	current = current->next, count++;

if (index > count)
	return (NULL);

current = head;
for (i = 0; i < index; i++)
{
	current = current->next;
}

return (current);
}
