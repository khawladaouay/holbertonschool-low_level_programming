#include "lists.h"
/**
 * sum_listint- returns the sum of all the data of a listint_t
 * @head: head of list
 * Return: the sum or 0
 */
int sum_listint(listint_t *head)
{int sum = 0;
listint_t *ptr;
	if (head == NULL)
	return (0);
	ptr = head;
while (ptr != NULL)
{ sum = sum + ptr->n;
	ptr = ptr->next;
}
return (sum);
}
