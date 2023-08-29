#include "lists.h"

/**
* delete_nodeint_at_index - deleting a node at a particluar index
* @head: pointer to pointer to head of list
* @index: index of node to delete
*
* Return: 1 if succeeded or -1 if it fails
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *node_prev, *node_next;
unsigned int count;

if (*head == NULL || head == NULL)
	return (-1);

if (index == 0)
{
	node_next = (*head)->next;
	free(*head);
	*head = node_next;
	return (1);
}

current = *head;
count = 0;
while (current != NULL)
	count++, current = current->next;

if (index > count)
	return (-1);

current = *head;
for (count = 0; count < index; count++)
	node_prev = current, current = current->next;

node_next = current->next;

free(current);

if (node_prev != NULL)
	node_prev->next = node_next;

return (1);
}
