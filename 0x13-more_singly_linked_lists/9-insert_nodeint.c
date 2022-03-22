#include "lists.h"
/**
 * insert_nodeint_at_index- inserts a new node at a given position
 * @head: head of list
 * @idx: position de new node
 * @n : data of new node
 * Return: the adress of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *ptr2 = malloc(sizeof(listint_t));

	ptr2->n = n;
	ptr2->next = NULL;
	idx--;
	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
	return (ptr2);
}
