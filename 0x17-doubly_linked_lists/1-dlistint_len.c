#include "lists.h"
/**
 * dlistint_len - the number of elements in linked list
 * @h: header
 * Return: int
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = NULL;
size_t i = 0;
	if (h != NULL)
	{
		ptr = h;
	}
while (ptr != NULL)
{
	i++;
	ptr = ptr->next;
}
return (i);
}
