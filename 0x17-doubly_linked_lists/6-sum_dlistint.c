#include "lists.h"
/**
 * sum_dlistint - sum of all the data in list
 * @head: header
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *ptr = head;
int sum = 0;
while (ptr != NULL)
{
	sum += ptr->n;
	ptr = ptr->next;
}
return (sum);
}
