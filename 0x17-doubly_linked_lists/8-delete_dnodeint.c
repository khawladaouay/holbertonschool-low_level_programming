#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node
 * @head: header
 * @index: index of element
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head_ref, *temp;
	unsigned int counter;

	if (head == NULL || *head == NULL)
		return (-1);

	counter = 0;
	head_ref = *head;
	while (head_ref)
	{
		if (index == counter)
		{
			temp = head_ref;
			if (head_ref == *head)
				*head = head_ref->next;
			if (head_ref->prev != NULL)
				head_ref->prev->next = head_ref->next;
			if (head_ref->next != NULL)
				head_ref->next->prev = head_ref->prev;
			free(temp);
			return (1);
		}
		counter++;
		head_ref = head_ref->next;
	}
	return (-1);
}
