#include "lists.h"
/**
 * add_dnodeint - prints the elements of
 * a doubly linked list and return the number
 * of nodes
 * @n: a doubly linked list
 * @head: list head
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));

    if (new == NULL || head == NULL)
        return (NULL);

    new->n = n;
    new->prev = NULL;
    new->next = *head;

    if (*head != NULL)
        (*head)->prev = new;
    *head = new;
    return (new);
}
