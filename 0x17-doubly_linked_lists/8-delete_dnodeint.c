#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: list head
 * @index: target index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = *head;
	unsigned int i = 0;

	while (*head != NULL)
	{
		if (i == index)
		{
			if ((*head)->next == NULL)
			{
				prev->next = NULL;
				(*head)->prev = NULL;
			}
			else
			{
				prev->next = (*head)->next;
				(*head)->next->prev = (*head)->prev;
			}
			return (-1);
		}
		i++;
		prev = *head;
		*head = (*head)->next;
	}

	return (-1);
}
