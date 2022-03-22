#include "lists.h"
/**
 * delete_nodeint_at_index- deletes the node at index
 * @head: head of list
 * @index: position od node
 * Return: the adress of the new node or NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *ptr, *tmp;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	ptr = *head;
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	tmp = *head;
	while (tmp)
	{
		if (i == index - 1)
		{
			ptr = tmp->next;
			tmp->next = ptr->next;
			free(ptr);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
