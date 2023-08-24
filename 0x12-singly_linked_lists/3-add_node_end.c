#include "lists.h"

/**
* add_node_end - adding node at end of list_t list
* @head: pointer to pointer to first node
* @str: str to set node to
*
* Return: pointer to node
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *current;
char *s = "(nil)";
if (str == NULL)
	str = s;
if (*head == NULL)
{
	*head = malloc(sizeof(list_t));
	if (*head == NULL)
		return (NULL);
	(*head)->str = strdup(str);
	if ((*head)->str == NULL)
	{
		free(*head);
		return (NULL); }
	if (str == s)
		(*head)->len = 0;
	else
		(*head)->len = strlen(str);
	(*head)->next = NULL;
	return (*head);
}
current = *head;
while (current->next != NULL)
	current = current->next;
current->next = malloc(sizeof(list_t));
if (current->next == NULL)
	return (NULL);
current = current->next;
current->str = strdup(str);
if (current->str == NULL)
{
	free(current);
	return (NULL);
}
if (str == s)
	current->len = 0;
else
	current->len = strlen(str);
current->next = NULL;
return (current);
}
