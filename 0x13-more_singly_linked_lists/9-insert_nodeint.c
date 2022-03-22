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
	listint_t *ptr = NULL;
	listint_t *new;
	unsigned int i = 0;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;

		if (idx != 0)
		{
			ptr = *head;
			while (ptr)
			{
				if (i == idx - 1)
				{
					new->next = ptr->next;
					ptr->next = new;
					return (new);
				}
				ptr = ptr->next;
				i++;
			}
			if (idx > i)
				return (NULL);
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	return (NULL);
}
