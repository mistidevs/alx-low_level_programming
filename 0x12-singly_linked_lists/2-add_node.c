#include "lists.h"

/**
 * add_node - adds node to a singly linked list
 * @head: the pointer to the pointer to the head of the list
 * @str: string to set *str in the node to
 *
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *current;

if (*head == NULL)
{
	*head = malloc(sizeof(list_t));
	(*head)->str = strdup(str);
	(*head)->len = strlen(str);
	(*head)->next = NULL;
}

current = malloc(sizeof(list_t));
if (current == NULL)
	return (NULL);


current->str = strdup(str);
current->len = strlen(str);
current->next = *head;
*head = current;

return (current);
}
