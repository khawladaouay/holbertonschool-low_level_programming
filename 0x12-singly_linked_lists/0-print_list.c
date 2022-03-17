#include "lists.h"
/**
 * print_list - prints all elements of list_t
 * @h: head of list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{const list_t *ptr = NULL;
	size_t i = 0;

	if (h != NULL)
	{
		ptr = h;
	}
	while (ptr != NULL)
	{
		i++;
		if (ptr->str == NULL)
		printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (i);
}
