#include "lists.h"

/**
* reverse_listint - reversing a listint_t linked list
* @head: pointer to pointer to first node
*
* Return: pointer to first node or NULL
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *current, *prev;

if (*head == NULL || head == NULL)
	return (NULL);

current = *head;
prev = NULL;

while (current != NULL)
{
*head = current;
current = current->next;
(*head)->next = prev;
prev = *head;
}

return (*head);
}
