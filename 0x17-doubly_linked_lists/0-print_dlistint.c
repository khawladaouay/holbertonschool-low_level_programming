#include "lists.h"
/**
 * print_dlistint - prints all the elemennts of a list
 * @h: head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{ const dlistint_t *ptr = NULL;
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
