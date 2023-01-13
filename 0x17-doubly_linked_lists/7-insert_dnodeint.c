#include "lists.h"
/**
 * insert_dnodeint_at_index - insert n at idx
 * @h: list head
 * @idx: target index
 * @n: value to be inserted
 * Return: new inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node, *last_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*h == NULL && idx == 0)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	new_node->n = n;

	while (temp != NULL)
	{
		if (i == idx)
		{
			new_node->next = temp;
			if (idx == 0)
			{
				temp->prev = new_node;
				*h = new_node;
				return (new_node);
			}
			else
			{
				new_node->prev = temp->prev;
				temp->prev->next = new_node;
				temp->prev = new_node;
				return (new_node);
			}
		}
		i++;
		last_node = temp;
		temp = temp->next;
	}

	if (i == idx)
	{
		last_node->next = new_node;
		new_node->prev = last_node;
		new_node->next = NULL;
		return (new_node);
	}
	return (NULL);
}
