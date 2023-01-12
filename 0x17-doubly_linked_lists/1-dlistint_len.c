#include "lists.h"
/**
 * dlistint_len - prints the elements of
 * a doubly linked list and return the number
 * of nodes
 * @h: a doubly linked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
