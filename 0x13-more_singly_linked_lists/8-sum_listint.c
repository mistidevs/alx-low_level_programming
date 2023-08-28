#include "lists.h"

/**
* sum_listint - summing all the data (n) of a listint_t list
* @head: pointer to first node of the list
*
* Return: sum or 0 if empty
*/

int sum_listint(listint_t *head)
{
listint_t *current;
int sum, num;

sum = num = 0;

if (head == NULL)
	return (0);

current = head;

while (current != NULL)
{
	num = current->n;
	sum += num;
	current = current->next;
}

return (sum);
}
