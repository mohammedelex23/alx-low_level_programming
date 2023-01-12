#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: list head
 * @index: target index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (1);

	if ((*head)->next == NULL && (*head)->prev == NULL)
	{
		*head = NULL;
		return (1);
	}

	temp = *head;

	while (temp != NULL)
	{
		if (i == index)
		{
			if (temp->next != NULL && temp->prev != NULL)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				return (1);
			}
			else if (temp->next == NULL && temp->prev != NULL)
			{
				temp->prev->next = NULL;
				return (1);
			}
			else
			{
				*head = temp->next;
				temp->next->prev = NULL;
				return (1);
			}
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
