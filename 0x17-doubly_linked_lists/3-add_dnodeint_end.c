#include "lists.h"

/**
* add_dnodeint_end - adding a new node at the end of a doubly linked list
* @head: pointer to pointer to first node
* @n: value of new node
*
* Return: address of new node or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *curr;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	return (NULL);
new_node->n = n;

if (*head == NULL)
{
	*head = new_node;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

curr = *head;
while (curr->next != NULL)
	curr = curr->next;

curr->next = new_node;
new_node->prev = curr;
new_node->next = NULL;

return (new_node);
}
