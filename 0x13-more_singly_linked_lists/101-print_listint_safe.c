#include "lists.h"

/**
* print_listint_safe - printing nodes with the address in memory
* @head: pointer to first node
*
* Return: number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
size_t count = 0, i = 0;
char *arr[1024];
int flag = 0;

if (head == NULL)
	exit(98);

while (head != NULL)
{
	i = 0;
	while (i < count)
	{
		if ((char *)head == arr[i])
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			flag = 1;
			break;
		}
		i++;
	}
	if (flag)
	{
		break;
	}
	printf("[%p] %d\n", (void *)head, head->n);
	arr[i] = (char *)head;
	head = head->next;
	count++;
}

return (count);
}
