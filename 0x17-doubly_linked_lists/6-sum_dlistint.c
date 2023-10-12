#include "lists.h"

/**
* sum_dlistint - summing all the numbers in the nodes
* of a doubly linked list
* @head: pointer to first node
*
* Return: sum of numbers of zero
*/

int sum_dlistint(dlistint_t *head)
{
dlistint_t *curr;
int result;

if (head == NULL)
	return (0);

curr = head;
result = 0;
while (curr != NULL)
{
	result += curr->n;
	curr = curr->next;
}

return (result);
}
