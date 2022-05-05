#include "lists.h"
/**
 * get_dnodeint_at_index - frees a list
 * @head: header
 * @index: is the index of the node
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *ptr = head;
unsigned int i = 0;
while (ptr != NULL)
{
	if (i == index)
		return (ptr);
	i++;
	ptr = ptr->next;
}
return (0);
}
