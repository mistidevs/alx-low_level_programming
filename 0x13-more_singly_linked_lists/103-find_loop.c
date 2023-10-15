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
while (slow != NULL && fast != NULL)
{
	slow = slow->next;
	fast = fast->next->next;
	if (slow == fast)
	{
		while (slow != NULL && head != NULL)
		{
			head = head->next;
			slow = slow->next;
			if (head == slow)
				return (head);
		}
	}
}

return (NULL);
}
