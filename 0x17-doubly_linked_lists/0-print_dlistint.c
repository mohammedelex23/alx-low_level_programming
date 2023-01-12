#include "lists.h"
/**
 * print_dlistint - prints the elements of
 * a doubly linked list and return the number
 * of nodes
 * @h: a doubly linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
