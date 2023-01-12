#include "lists.h"
/**
 * free_dlistint - free memory of linked list
 * @head: list head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
	free(head);
	free(temp);
}
