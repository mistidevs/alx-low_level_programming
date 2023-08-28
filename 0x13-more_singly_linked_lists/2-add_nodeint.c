#include "lists.h"

/**
 * add_nodeint - adds node to a singly linked list
 * @head: the pointer to the pointer to the head of the list
 * @n: number to add as content of node
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
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

current = malloc(sizeof(listint_t));
if (current == NULL)
	return (NULL);
current->n = n;
current->next = *head;
*head = current;

return (current);
}
