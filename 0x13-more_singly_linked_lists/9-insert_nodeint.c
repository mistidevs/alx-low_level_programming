#include "lists.h"

/**
* insert_nodeint_at_index - inserting a node at a particular index
* @head: pointer to pointer to head of the list
* @idx: index to add node to
* @n: number to set value of node to
*
* Return: address of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current, *new_node, *node_prev;
unsigned int count;

if (*head == NULL || head == NULL)
	return (NULL);

if (idx == 0)
{
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
}

count = 0;
current = *head;
while (current != NULL)
	count++, current = current->next;

if (idx > count)
	return (NULL);

current = *head;
for (count = 0; count < (idx - 1); count++)
	current = current->next;

node_prev = current;
current = current->next;
new_node = malloc(sizeof(listint_t));
if (current == NULL)
	return (NULL);

new_node->n = n;
new_node->next = current;
node_prev->next = new_node;

return (new_node);
}
