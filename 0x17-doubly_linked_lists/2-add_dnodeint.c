#include "lists.h"

/**
* add_dnodeint - adding a new node to a doubly linked list
* @head: pointer to pointer to first node
* @n: value of n in the new node
*
* Return: pointer to created node or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp;
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	return (NULL);
new_node->n = n;
new_node->prev = NULL;

if (*head == NULL)
{
	*head = new_node;
	new_node->next = NULL;
	return (new_node);
}

temp = *head;
*head = new_node;
new_node->next = temp;
temp->prev = new_node;

return (new_node);
}
