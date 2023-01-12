#include "lists.h"
/**
 * get_dnodeint_at_index - find node at index
 * @head: list head
 * @index: target index
 * Return: the found node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
