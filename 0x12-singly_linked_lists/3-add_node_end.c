#include "lists.h"
/**
 * add_node_end - adds node to the end of a list_t list
 * @head: head of list
 * @str: string to add
 * Return: Address of new element or NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *c;
	int i;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	c = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	new->str = c;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
