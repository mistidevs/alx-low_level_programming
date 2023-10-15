#include "lists.h"

/**
* find_listint_loop - finding a loop in a linked list
* @head: pointer to head node of list
*
* Return: pointer to address of start of loop
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;

slow = fast = head;
while (fast != NULL && fast->next != NULL)
{
	slow = slow->next;
	fast = fast->next->next;
	if (slow == fast)
	{
		slow = head;
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}
		return (fast);
	}
}

return (NULL);
}
