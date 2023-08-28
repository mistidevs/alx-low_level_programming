#include "lists.h"

/**
* add_nodeint_end - adding node at end of listint_t list
* @head: pointer to pointer to first node
* @n: number to set as content of node
*
* Return: pointer to node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *current;

if (*head == NULL)
{
	*head = malloc(sizeof(listint_t));
	if (*head == NULL)
		return (NULL);
	(*head)->n = n;
	(*head)->next = NULL;
	return (*head);
}

current = *head;
while (current->next != NULL)
	current = current->next;
current->next = malloc(sizeof(listint_t));
if (current->next == NULL)
	return (NULL);
current = current->next;
current->n = n;
current->next = NULL;
return (current);
}
