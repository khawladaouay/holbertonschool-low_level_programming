#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node
 * @h: header
 * @idx: index of element
 * @n: data
 * Return: int
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newNode, *ptr = *h;
unsigned int i = 1;
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

while (ptr != NULL)
{
	if (i == idx)
	{
		newNode->next = ptr->next;
		newNode->prev = ptr;
		ptr->next = newNode;
	}
	i++;
	ptr = ptr->next;
}
return (newNode);
}
