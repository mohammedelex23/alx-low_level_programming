#include "lists.h"
/**
 * sum_dlistint - sum all nodes
 * @head: list head
 * Return: sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
