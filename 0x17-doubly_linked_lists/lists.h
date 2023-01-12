#ifndef LISTS
#define LISTS

typedef struct node dlistint_t;

/**
 * struct node - a struct
 * @n: a doubly linked list
 * @next: link to next node
 * @prev: link to prev node
 */
struct node
{
	int n;
	struct node *next;
	struct node *prev;
};

#include <stdio.h>
#include <stdlib.h>
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
#endif /* LISTS */