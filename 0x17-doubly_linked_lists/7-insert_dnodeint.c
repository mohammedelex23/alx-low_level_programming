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
	dlistint_t *temp = *h, *new_node;
	unsigned int i = 0;

	if (idx == 0)/* insert at beginning  */
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (i == idx)
		{
			new_node->n = n;
			new_node->prev = temp->prev;
			new_node->next = temp;
			temp->prev->next = new_node;
			temp->prev = new_node;
			return (new_node);
		}
		i++;
		temp = temp->next;
	}
	if (i == idx)
		return (add_dnodeint_end(h, i));
	return (NULL);
}
