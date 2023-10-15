#include "lists.h"

/**
* free_listint_safe - freeing a list with a loop
* @h: pointer to pointer to the head of a list
*
* Return: size of list freed
*/

size_t free_listint_safe(listint_t **h)
{
size_t count = 0, i = 0;
char *arr[1024];
int flag = 0;
listint_t *curr, *next;

if (h == NULL || *h == NULL)
	return (0);

curr = *h;
*h = NULL;
while (curr != NULL)
{
	i = 0;
	next = curr->next;
	while (i < count)
	{
		if ((char *)curr == arr[i])
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag)
		break;
	arr[count] = (char *)curr;
	free(curr);
	curr = next;
	count++;
}

return (count);
}
