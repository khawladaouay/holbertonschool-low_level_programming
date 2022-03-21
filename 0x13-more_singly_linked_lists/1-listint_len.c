#include "lists.h"
/**
 * list_len - prints the number of list_t
 * @h: head of list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
const listint_t *ptr = NULL;
size_t count = 0;

	if (h != NULL)
	{
		ptr = h;
	}
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
