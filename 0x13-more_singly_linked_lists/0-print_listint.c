#include "lists.h"
/**
 * print_listint - prints all elements of listint_t
 * @h: head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{const listint_t *ptr = NULL;
	size_t i = 0;

	if (h != NULL)
	{
		ptr = h;
	}
	while (ptr != NULL)
	{
		i++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (i);
}
