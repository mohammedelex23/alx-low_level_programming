#include "lists.h"
/**
 * free_dlistint - free memory of linked list
 * @head: list head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node = NULL;

	while (head != NULL)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
