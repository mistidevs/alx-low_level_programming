#include "lists.h"

/**
* pop_listint - deleting head node of listint_t list
* @head: pointer to pointer to the head node of the list
*
* Return: head node's data
*/

int pop_listint(listint_t **head)
{
int temp;
listint_t *current;

if ((*head) == NULL)
	return (0);

current = *head;
*head = current->next;

temp = current->n;

free(current);

return (temp);
}
