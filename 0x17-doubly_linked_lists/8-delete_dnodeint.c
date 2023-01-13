#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: list head
 * @index: target index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
	{
		free(*head);
		return (-1);	
	}
	if (index == 0 && (*head)->next == NULL)/* delete at beginning  */
	{
		*head = NULL;
		return (1);
	}
	if (index == 0 && (*head)->next != NULL)/* delete at beginning  */
	{
		(*head)->next->prev = NULL;
		*head = (*head)->next;
		return (1);
	}
	while (temp != NULL)
	{
		if (i == index && temp->next == NULL)
		{
			temp->prev->next = NULL;
			return (1);
		}
		if (i == index && temp->next != NULL)
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
