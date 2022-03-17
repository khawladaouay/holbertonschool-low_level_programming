#include "lists.h"
/**
 * add_node - adds node to the beginning of a list_t list
 * @head: head of list
 * @str: string to add
 * Return: Address of new element or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	return (NULL);
		newnode->str = strdup(str);
		newnode->next = NULL;
	while (str[i] != '\0')
	i++;
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
